//
//  MKMapView+ZoomLevel.h
//  NewMapOffApp389
//
//  Created by Kraisorn Soisakhu on 1/18/2560 BE.
//  Copyright © 2560 NeontoStudioUser. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface MKMapView (ZoomLevel)

- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
                  zoomLevel:(NSUInteger)zoomLevel
                   animated:(BOOL)animated;

@end
