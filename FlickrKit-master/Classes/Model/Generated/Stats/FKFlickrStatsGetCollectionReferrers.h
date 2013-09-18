//
//  FKFlickrStatsGetCollectionReferrers.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrStatsGetCollectionReferrersError_UserDoesNotHaveStats = 1,		 /* The user you have requested stats has not enabled stats on their account. */
	FKFlickrStatsGetCollectionReferrersError_NoStatsForThatDate = 2,		 /* No stats are available for the date requested. Flickr only keeps stats data for the last 28 days. */
	FKFlickrStatsGetCollectionReferrersError_InvalidDate = 3,		 /* The date provided could not be parsed */
	FKFlickrStatsGetCollectionReferrersError_CollectionNotFound = 4,		 /* The collection id was either invalid or was for a collection not owned by the calling user. */
	FKFlickrStatsGetCollectionReferrersError_InvalidDomain = 5,		 /* The domain provided is not in the expected format. */
	FKFlickrStatsGetCollectionReferrersError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrStatsGetCollectionReferrersError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrStatsGetCollectionReferrersError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrStatsGetCollectionReferrersError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrStatsGetCollectionReferrersError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrStatsGetCollectionReferrersError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrStatsGetCollectionReferrersError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrStatsGetCollectionReferrersError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrStatsGetCollectionReferrersError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrStatsGetCollectionReferrersError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrStatsGetCollectionReferrersError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrStatsGetCollectionReferrersError;

/*

Get a list of referrers from a given domain to a collection

<p>There is one <code>&lt;referrer&gt;</code> element for each referring page, with attributes for the url and the number of views.</p>

<p>Where the referring page is a search engine and we have identified the search term it will be given in the searchterm attribute.</p>

Response:

<domain page="1" perpage="25" pages="1" total="3" name="flickr.com">
	<referrer url="http://flickr.com/" views="11"/>
	<referrer url="http://flickr.com/photos/friends/" views="8"/>
	<referrer url="http://flickr.com/search/?q=stats+api" views="2" searchterm="stats api"/>
</domain>


*/
@interface FKFlickrStatsGetCollectionReferrers : NSObject <FKFlickrAPIMethod>

/* Stats will be returned for this date. This should be in either be in YYYY-MM-DD or unix timestamp format. 

A day according to Flickr Stats starts at midnight GMT for all users, and timestamps will automatically be rounded down to the start of the day. */
@property (nonatomic, strong) NSString *date; /* (Required) */

/* The domain to return referrers for. This should be a hostname (eg: "flickr.com") with no protocol or pathname. */
@property (nonatomic, strong) NSString *domain; /* (Required) */

/* The id of the collection to get stats for. If not provided, stats for all collections will be returned. */
@property (nonatomic, strong) NSString *collection_id;

/* Number of referrers to return per page. If this argument is omitted, it defaults to 25. The maximum allowed value is 100. */
@property (nonatomic, strong) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, strong) NSString *page;


@end
