//
//  BGPulldownMenu.h
//
//  Created by Bernard Gatt
//

/*
The MIT License (MIT)

Copyright (c) 2013 Bernard Gatt

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#import <UIKit/UIKit.h>

@protocol BGPulldownMenuDelegate
    -(void)menuItemSelected:(NSIndexPath *)indexPath;
    -(void)pullDownAnimated:(BOOL)open;
@end

@interface BGPulldownMenu : UIView<UITableViewDataSource, UITableViewDelegate> {
    UITableView *menuList;
    NSMutableArray *menuItems;
    
    UIView *handle;
    UIView *masterView;
    UIPanGestureRecognizer *navigationDragGestureRecognizer;
    UIPanGestureRecognizer *handleDragGestureRecognizer;
    UINavigationController *masterNavigationController;
    UIDeviceOrientation currentOrientation;
    
    float topMargin;
    float tableHeight;
}

@property (nonatomic, assign) id<BGPulldownMenuDelegate> delegate;
@property (nonatomic, retain) UITableView *menuList;
@property (nonatomic, retain) UIView *handle;

/* Appearance Properties */
@property (nonatomic) float handleHeight;
@property (nonatomic) float animationDuration;
@property (nonatomic) float topMarginPortrait;
@property (nonatomic) float topMarginLandscape;
@property (nonatomic) UIColor *cellColor;
@property (nonatomic) UIColor *cellSelectedColor;
@property (nonatomic) UIColor *cellTextColor;
@property (nonatomic) UITableViewCellSelectionStyle cellSelectionStyle;
@property (nonatomic) UIFont *cellFont;
@property (nonatomic) float cellHeight;
@property (nonatomic) BOOL fullyOpen;

- (id)initWithNavigationController:(UINavigationController *)navigationController;
- (id)initWithView:(UIView *)view;
- (void)insertButton:(NSString *)title;
- (void)loadMenu;
- (void)animateDropDown;

@end
