//
//  KKSharedToolCode.h
//  KKNewProject
//
//  Created by Steffen Itterheim on 27.08.13.
//  Copyright (c) 2013 Steffen Itterheim. All rights reserved.
//

<<<<<<< HEAD
=======
// compatibility, prevent compile error
typedef NSColor SKColor;

// CGVector is not in OS X 10.8 SDK
struct CGVector
{
	CGFloat dx;
	CGFloat dy;
};
typedef struct CGVector CGVector;
CG_INLINE CGVector
CGVectorMake(CGFloat dx, CGFloat dy)
{
	CGVector vector; vector.dx = dx; vector.dy = dy; return vector;
}


>>>>>>> refs/heads/KK-Free-master
#import "KKToolConstants.h"
#import "KKCopyFilesFilter.h"
#import "KKToolDataSource.h"
#import "KKToolHelper.h"
#import "KKXcodeProject.h"

// Kobold Kit headers
#import "External/VTPG/VTPG_Common.h"
#import "Framework/Scripting/KKLua.h"

<<<<<<< HEAD
// compatibility, prevent compile error
typedef NSColor SKColor;
=======
>>>>>>> refs/heads/KK-Free-master
#import "Framework/Categories/Foundation/NSString+KoboldKit.h"
