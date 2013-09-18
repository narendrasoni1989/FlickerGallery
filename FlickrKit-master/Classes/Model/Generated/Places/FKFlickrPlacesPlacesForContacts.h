//
//  FKFlickrPlacesPlacesForContacts.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPlacesPlacesForContactsError_PlacesForContactsAreNotAvailableAtThisTime = 1,		 /* Places for contacts have been disabled or are otherwise not available. */
	FKFlickrPlacesPlacesForContactsError_RequiredParameterMissing = 2,		 /* One or more of the required parameters was not included with your request. */
	FKFlickrPlacesPlacesForContactsError_NotAValidPlaceType = 3,		 /* An invalid place type was included with your request. */
	FKFlickrPlacesPlacesForContactsError_NotAValidPlaceID = 4,		 /* An invalid Places (or WOE) identifier was included with your request. */
	FKFlickrPlacesPlacesForContactsError_NotAValidThreshold = 5,		 /* The threshold passed was invalid.  */
	FKFlickrPlacesPlacesForContactsError_NotAValidContactsType = 6,		 /* Contacts must be either "all" or "ff" (friends and family). */
	FKFlickrPlacesPlacesForContactsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPlacesPlacesForContactsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPlacesPlacesForContactsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPlacesPlacesForContactsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPlacesPlacesForContactsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPlacesPlacesForContactsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPlacesPlacesForContactsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPlacesPlacesForContactsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPlacesPlacesForContactsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPlacesPlacesForContactsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPlacesPlacesForContactsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPlacesPlacesForContactsError;

/*

Return a list of the top 100 unique places clustered by a given placetype for a user's contacts. 


Response:

<places total="1">
   <place place_id="kH8dLOubBZRvX_YZ" woeid="2487956"
               latitude="37.779" longitude="-122.420"
               place_url="/United+States/California/San+Francisco"
               place_type="locality"
               photo_count="156">San Francisco, California</place>
</places>

*/
@interface FKFlickrPlacesPlacesForContacts : NSObject <FKFlickrAPIMethod>

/* A specific place type to cluster photos by. <br /><br />

Valid place types are :

<ul>
<li><strong>neighbourhood</strong> (and neighborhood)</li>
<li><strong>locality</strong></li>
<li><strong>region</strong></li>
<li><strong>country</strong></li>
<li><strong>continent</strong></li>
</ul>
<br />
<span style="font-style:italic;">The "place_type" argument has been deprecated in favor of the "place_type_id" argument. It won't go away but it will not be added to new methods. A complete list of place type IDs is available using the <a href="http://www.flickr.com/services/api/flickr.places.getPlaceTypes.html">flickr.places.getPlaceTypes</a> method. (While optional, you must pass either a valid place type or place type ID.)</span> */
@property (nonatomic, strong) NSString *place_type;

/* The numeric ID for a specific place type to cluster photos by. <br /><br />

Valid place type IDs are :

<ul>
<li><strong>22</strong>: neighbourhood</li>
<li><strong>7</strong>: locality</li>
<li><strong>8</strong>: region</li>
<li><strong>12</strong>: country</li>
<li><strong>29</strong>: continent</li>
</ul>
<br /><span style="font-style:italic;">(While optional, you must pass either a valid place type or place type ID.)</span> */
@property (nonatomic, strong) NSString *place_type_id;

/* A Where on Earth identifier to use to filter photo clusters. For example all the photos clustered by <strong>locality</strong> in the United States (WOE ID <strong>23424977</strong>).<br /><br />
<span style="font-style:italic;">(While optional, you must pass either a valid Places ID or a WOE ID.)</span> */
@property (nonatomic, strong) NSString *woe_id;

/* A Flickr Places identifier to use to filter photo clusters. For example all the photos clustered by <strong>locality</strong> in the United States (Place ID <strong>4KO02SibApitvSBieQ</strong>).
<br /><br />
<span style="font-style:italic;">(While optional, you must pass either a valid Places ID or a WOE ID.)</span> */
@property (nonatomic, strong) NSString *place_id;

/* The minimum number of photos that a place type must have to be included. If the number of photos is lowered then the parent place type for that place will be used.<br /><br />

For example if your contacts only have <strong>3</strong> photos taken in the locality of Montreal</strong> (WOE ID 3534) but your threshold is set to <strong>5</strong> then those photos will be "rolled up" and included instead with a place record for the region of Quebec (WOE ID 2344924). */
@property (nonatomic, strong) NSString *threshold;

/* Search your contacts. Either 'all' or 'ff' for just friends and family. (Default is all) */
@property (nonatomic, strong) NSString *contacts;

/* Minimum upload date. Photos with an upload date greater than or equal to this value will be returned. The date should be in the form of a unix timestamp. */
@property (nonatomic, strong) NSString *min_upload_date;

/* Maximum upload date. Photos with an upload date less than or equal to this value will be returned. The date should be in the form of a unix timestamp. */
@property (nonatomic, strong) NSString *max_upload_date;

/* Minimum taken date. Photos with an taken date greater than or equal to this value will be returned. The date should be in the form of a mysql datetime. */
@property (nonatomic, strong) NSString *min_taken_date;

/* Maximum taken date. Photos with an taken date less than or equal to this value will be returned. The date should be in the form of a mysql datetime. */
@property (nonatomic, strong) NSString *max_taken_date;


@end
