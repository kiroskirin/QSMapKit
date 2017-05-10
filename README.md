# QSMapKit

QSMapkit is a set of classes which takes tiles formatted in MBTiles SQLite3 database to presents offline map within a pre-defined region on iOS devices.

It work with Apple Map.

To make QSMapKit to work its need a combination code base on OSMMapKit and FMDB

# OSMMapKit by t2wu

https://github.com/t2wu/OSMMapKit

# FMDB by cccus

https://github.com/ccgus/fmdb

# How to use
It work with subclass MKMapView too

# Load MBTiles 

~~~
NSURL *urlBundle = [[NSBundle mainBundle] URLForResource:@"Maps" withExtension:@"bundle"];
NSBundle *resouceBundle = [NSBundle bundleWithURL:urlBundle];
NSURL *baseTile = [resouceBundle URLForResource:@"BaseMap" withExtension:@"mbtiles"];

MBTilesDB *db = [[MBTilesDB alloc] initWithDBURL:baseTile];

MBTilesOverlay *overlay = [[MBTilesOverlay alloc] initWithMBTilesDB:db];
overlay.tileTitle = @"BaseMap";
overlay.geometryFlipped = YES;
overlay.canReplaceMapContent = NO;

[self.mapView addOverlay:overlay level:MKOverlayLevelAboveLabels];
~~~

## Base code and Credit

Code heavily influenced by sources from [MapBox iOS SDK] and [MBXMapKit], as well as various sources, notably [the discussion thread on ZoomLevel] from Troy Brant and input on [constraining the map region] from Anna Karenina.

[OpenStreetMap]: http://www.openstreetmap.org/
[OpenStreetMap Wiki]: http://wiki.openstreetmap.org/wiki/Main_Page
[OSM data download]: http://wiki.openstreetmap.org/wiki/Downloading_data
[PostGis]: http://postgis.net/
[TileMill]: https://www.mapbox.com/tilemill/
[osm2pqsql]: http://wiki.openstreetmap.org/wiki/Osm2pgsql
[Imposm]: http://imposm.org/
[Carto]: http://wiki.openstreetmap.org/wiki/Carto
[OSM Bright]: https://github.com/mapbox/osm-bright
[OSM Bright Mac OS X quickstart]: https://www.mapbox.com/tilemill/docs/guides/osm-bright-mac-quickstart/
[MBTiles]: https://www.mapbox.com/developers/mbtiles/
[FMDB]: https://github.com/ccgus/fmdb
[the discussion thread on ZoomLevel]: http://troybrant.net/blog/2010/01/set-the-zoom-level-of-an-mkmapview/
[MapBox iOS SDK]: https://www.mapbox.com/mapbox-ios-sdk/
[MBXMapKit]: https://www.mapbox.com/mbxmapkit/
[constraining the map region]: http://stackoverflow.com/questions/4119117/restrict-mkmapview-scrolling
[FMDB]: https://github.com/ccgus/fmdb
[the discussion thread on ZoomLevel]: http://troybrant.net/blog/2010/01/set-the-zoom-level-of-an-mkmapview/
[MapBox iOS SDK]: https://www.mapbox.com/mapbox-ios-sdk/
[MBXMapKit]: https://www.mapbox.com/mbxmapkit/
[constraining the map region]: http://stackoverflow.com/questions/4119117/restrict-mkmapview-scrolling
