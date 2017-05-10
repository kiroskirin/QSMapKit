//
//  QSMapKit.h
//  QSMapKit
//
//  Created by Kraisorn Soisakhu on 10/29/2559 BE.
//  Copyright © 2559 iWA Labs Thailand. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

//! Project version number for QSMapKit.
FOUNDATION_EXPORT double QSMapKitVersionNumber;

//! Project version string for QSMapKit.
FOUNDATION_EXPORT const unsigned char QSMapKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <QSMapKit/PublicHeader.h>

// DBTiles
#import <QSMapKit/QSMapKit.h>
#import <QSMapKit/CocoaCategory.h>
#import <QSMapKit/MBTilesDB.h>
#import <QSMapKit/MBTilesOverlay.h>
#import <QSMapKit/mkgeometry_additions.h>
#import <QSMapKit/NSMutableArray+TrimWhiteSpace.h>
#import <QSMapKit/NSString+Tokenize.h>
#import <QSMapKit/RegionBBoxConverter.h>
#import <QSMapKit/MKMapView+ZoomLevel.h>

// FMDB
#import <QSMapKit/FMDB.h>
#import <QSMapKit/FMDatabase.h>
#import <QSMapKit/FMResultSet.h>
#import <QSMapKit/FMDatabaseAdditions.h>
#import <QSMapKit/FMDatabaseQueue.h>
#import <QSMapKit/FMDatabasePool.h>

