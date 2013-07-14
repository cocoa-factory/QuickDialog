//
// Copyright 2012 Ludovic Landry - http://about.me/ludoviclandry
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

/** Image element.  
 
 This subclass of QEntryElement declares the programmatic interface to a class of objects that display an
 image in a form.
 */
@interface QImageElement : QEntryElement

/** Returns or sets the UIImage displayed in the cell */
@property (nonatomic, strong) UIImage *imageValue;

/** Provides access to the imageValue of the cell by name.  Setting this property looks for an image with the provided name 
 in the main application bundle and sets the imageValue property to that image.  The getter always returns nil.
 */
@property (nonatomic, strong) NSString *imageValueNamed;

/** Sets the largest dimension that the element's image can occupy in the cell. */
@property (nonatomic, assign) float imageMaxLength;

/** Sets or returns the UIImagePickerControllerSourceType used to select a different image for the element if the user
 selects the cell.
 */
@property(nonatomic) UIImagePickerControllerSourceType source;

/** @name Initialization */

/** Designated initializer.
 
 This method returns a new instance of the class with the provided title and detail image.
 
 @param title
    The title displayed on the cell.
 @param image
    The image displayed on the cell.
 @return The method returns a newly-intialized instance of the class.
 */
- (QImageElement *)initWithTitle:(NSString *)title detailImage:(UIImage *)image;

@end
