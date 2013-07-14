//                                
// Copyright 2011 ESCOZ Inc  - http://escoz.com
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
// file except in compliance with the License. You may obtain a copy of the License at 
// 
// http://www.apache.org/licenses/LICENSE-2.0 
// 
// Unless required by applicable law or agreed to in writing, software distributed under
// the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
// ANY KIND, either express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QRootElement.h"

/** A label element.  This subclass of QRootElement declares the programmatic interface to a class of objects
 that display a label element in a form.  Rows that instances of this class display are not editable.
 */
@interface QLabelElement : QRootElement {

@protected
    id _value;
    UIImage *_image;
}

/** An image to display for the row. */
@property(nonatomic, strong) UIImage *image;

/** Sets an image by its name. The getter method returns nil. */
@property(nonatomic, assign) NSString *imageNamed;

/** Accessory type for the displayed cell in the form's table */
@property(nonatomic, assign) UITableViewCellAccessoryType accessoryType;

/** The value displayed in the cell */
@property(nonatomic, strong) id value;

/** Keeps the displayed cell selected after it is tapped */
@property(nonatomic) BOOL keepSelected;

/** @name Initialization */

/** Designated initializer.  
 
 Returns an instance of the class with the provided title and value
 
 @param string
    The title of the displayed cell
 @param value
    The value of the displayed cell
 @return Returns a newly initialized instance of the class
 */
- (QLabelElement *)initWithTitle:(NSString *)string value:(id)value;

@end
