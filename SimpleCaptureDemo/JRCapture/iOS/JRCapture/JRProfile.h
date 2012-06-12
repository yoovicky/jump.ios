/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 Copyright (c) 2012, Janrain, Inc.

 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation and/or
   other materials provided with the distribution.
 * Neither the name of the Janrain, Inc. nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.


 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#import <Foundation/Foundation.h>
#import "JRCapture.h"
#import "JRAccountsElement.h"
#import "JRAddressesElement.h"
#import "JRBodyType.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRCurrentLocation.h"
#import "JREmailsElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRImsElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRName.h"
#import "JROrganizationsElement.h"
#import "JRStringPluralElement.h"
#import "JRPhoneNumbersElement.h"
#import "JRProfilePhotosElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRStringPluralElement.h"
#import "JRUrlsElement.h"

@interface NSArray (Profile_ArrayComparison)
- (BOOL)isEqualToOtherAccountsArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherAddressesArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherEmailsArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherImsArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherOrganizationsArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherPhoneNumbersArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherProfilePhotosArray:(NSArray *)otherArray;
- (BOOL)isEqualToOtherUrlsArray:(NSArray *)otherArray;
@end

/**
 * @brief A JRProfile object
 **/
@interface JRProfile : JRCaptureObject
@property (nonatomic, copy) NSString *aboutMe; /**< A general statement about the person. */ 
@property (nonatomic, copy) NSArray *accounts; /**< Describes an account held by this Contact, which MAY be on the Service Provider's service, or MAY be on a different service. @note This is an array of \c JRAccountsElement objects */ 
@property (nonatomic, copy) NSArray *addresses; /**< A physical mailing address for this Contact. @note This is an array of \c JRAddressesElement objects */ 
@property (nonatomic, copy) JRDate *anniversary; /**< The wedding anniversary of this contact. @note This is a property of type \ref types "date", which is a typedef of \e NSDate. The accepted format should be an ISO8601 date string (e.g., <code>yyyy-MM-dd</code>) */ 
@property (nonatomic, copy) NSString *birthday; /**< The birthday of this contact. */ 
@property (nonatomic, copy) JRBodyType *bodyType; /**< Person's body characteristics. */ 
@property (nonatomic, copy) JRStringArray *books; /**< Person's favorite books. @note This is an array of \c JRStringPluralElements with type \c book TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *cars; /**< Person's favorite cars. @note This is an array of \c JRStringPluralElements with type \c car TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *children; /**< Description of the person's children. @note This is an array of \c JRStringPluralElements with type \c value TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRCurrentLocation *currentLocation; /**< The object's \e currentLocation property */ 
@property (nonatomic, copy) NSString *displayName; /**< The name of this Contact, suitable for display to end-users. */ 
@property (nonatomic, copy) NSString *drinker; /**< Person's drinking status. */ 
@property (nonatomic, copy) NSArray *emails; /**< E-mail address for this Contact. @note This is an array of \c JREmailsElement objects */ 
@property (nonatomic, copy) NSString *ethnicity; /**< Person's ethnicity. */ 
@property (nonatomic, copy) NSString *fashion; /**< Person's thoughts on fashion. */ 
@property (nonatomic, copy) JRStringArray *food; /**< Person's favorite food. @note This is an array of \c JRStringPluralElements with type \c food TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSString *gender; /**< The gender of this contact. */ 
@property (nonatomic, copy) NSString *happiestWhen; /**< Describes when the person is happiest. */ 
@property (nonatomic, copy) JRStringArray *heroes; /**< Person's favorite heroes. @note This is an array of \c JRStringPluralElements with type \c hero TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSString *humor; /**< Person's thoughts on humor. */ 
@property (nonatomic, copy) NSArray *ims; /**< Instant messaging address for this Contact. @note This is an array of \c JRImsElement objects */ 
@property (nonatomic, copy) NSString *interestedInMeeting; /**< The object's \e interestedInMeeting property */ 
@property (nonatomic, copy) JRStringArray *interests; /**< Person's interests, hobbies or passions. @note This is an array of \c JRStringPluralElements with type \c interest TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *jobInterests; /**< Person's favorite jobs, or job interests and skills. @note This is an array of \c JRStringPluralElements with type \c jobInterest TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *languages; /**< The object's \e languages property @note This is an array of \c JRStringPluralElements with type \c language TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *languagesSpoken; /**< List of the languages that the person speaks as ISO 639-1 codes. @note This is an array of \c JRStringPluralElements with type \c languageSpoken TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSString *livingArrangement; /**< Description of the person's living arrangement. */ 
@property (nonatomic, copy) JRStringArray *lookingFor; /**< Person's statement about who or what they are looking for, or what they are interested in meeting people for. @note This is an array of \c JRStringPluralElements with type \c value TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *movies; /**< Person's favorite movies. @note This is an array of \c JRStringPluralElements with type \c movie TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *music; /**< Person's favorite music. @note This is an array of \c JRStringPluralElements with type \c music TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRName *name; /**< The object's \e name property */ 
@property (nonatomic, copy) NSString *nickname; /**< The casual way to address this Contact in real life */ 
@property (nonatomic, copy) NSString *note; /**< Notes about this person, with an unspecified meaning or usage. */ 
@property (nonatomic, copy) NSArray *organizations; /**< Describes a current or past organizational affiliation of this contact. @note This is an array of \c JROrganizationsElement objects */ 
@property (nonatomic, copy) JRStringArray *pets; /**< Description of the person's pets @note This is an array of \c JRStringPluralElements with type \c value TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSArray *phoneNumbers; /**< Phone number for this Contact. @note This is an array of \c JRPhoneNumbersElement objects */ 
@property (nonatomic, copy) NSArray *profilePhotos; /**< URL of a photo of this contact. @note This is an array of \c JRProfilePhotosElement objects */ 
@property (nonatomic, copy) NSString *politicalViews; /**< Person's political views. */ 
@property (nonatomic, copy) NSString *preferredUsername; /**< The preferred username of this contact on sites that ask for a username. */ 
@property (nonatomic, copy) NSString *profileSong; /**< URL of a person's profile song. */ 
@property (nonatomic, copy) NSString *profileUrl; /**< Person's profile URL, specified as a string. */ 
@property (nonatomic, copy) NSString *profileVideo; /**< URL of a person's profile video. */ 
@property (nonatomic, copy) JRDateTime *published; /**< The date this Contact was first added to the user's address book or friends list. @note This is a property of type \ref types "dateTime", which is a typedef of \e NSDate. The accepted format should be an ISO8601 dateTime string (e.g., <code>yyyy-MM-dd HH:mm:ss.SSSSSS ZZZ</code>) */ 
@property (nonatomic, copy) JRStringArray *quotes; /**< Person's favorite quotes @note This is an array of \c JRStringPluralElements with type \c quote TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSString *relationshipStatus; /**< Person's relationship status. */ 
@property (nonatomic, copy) JRStringArray *relationships; /**< A bi-directionally asserted relationship type that was established between the user and this contact by the Service Provider. @note This is an array of \c JRStringPluralElements with type \c relationship TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSString *religion; /**< Person's relgion or religious views. */ 
@property (nonatomic, copy) NSString *romance; /**< Person's comments about romance. */ 
@property (nonatomic, copy) NSString *scaredOf; /**< What the person is scared of. */ 
@property (nonatomic, copy) NSString *sexualOrientation; /**< Person's sexual orientation. */ 
@property (nonatomic, copy) NSString *smoker; /**< Person's smoking status. */ 
@property (nonatomic, copy) JRStringArray *sports; /**< Person's favorite sports @note This is an array of \c JRStringPluralElements with type \c sport TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) NSString *status; /**< Person's status, headline or shoutout. */ 
@property (nonatomic, copy) JRStringArray *tags; /**< A user-defined category or label for this contact. @note This is an array of \c JRStringPluralElements with type \c tag TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *turnOffs; /**< Person's turn offs. @note This is an array of \c JRStringPluralElements with type \c turnOff TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *turnOns; /**< Person's turn ons. @note This is an array of \c JRStringPluralElements with type \c turnOn TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRStringArray *tvShows; /**< Person's favorite TV shows. @note This is an array of \c JRStringPluralElements with type \c tvShow TODO: Add note about how setting the array requires a replace on capture and how you can set it with an array of stringPluralElements or just an array of strings */ 
@property (nonatomic, copy) JRDateTime *updated; /**< The most recent date the details of this Contact were updated. @note This is a property of type \ref types "dateTime", which is a typedef of \e NSDate. The accepted format should be an ISO8601 dateTime string (e.g., <code>yyyy-MM-dd HH:mm:ss.SSSSSS ZZZ</code>) */ 
@property (nonatomic, copy) NSArray *urls; /**< URL of a web page relating to this Contact. @note This is an array of \c JRUrlsElement objects */ 
@property (nonatomic, copy) NSString *utcOffset; /**< The offset from UTC of this Contact's current time zone. */ 

/**
 * @name Constructors
 **/
/*@{*/
/**
 * Default constructor. Returns an empty JRProfile object
 *
 * @return
 *   A JRProfile object
 **/
- (id)init;

/**
 * Returns an empty JRProfile object
 *
 * @return
 *   A JRProfile object
 **/
+ (id)profile;

/**
 * Returns a JRProfile object created from an \e NSDictionary representing the object
 *
 * @param dictionary
 *   An \e NSDictionary containing keys/values which map the the object's 
 *   properties and their values/types.  This value cannot be nil
 *
 * @param capturePath
 *   This is the qualified name used to refer to specific elements in a record;
 *   a pound sign (#) is used to refer to plural elements with an id. The path
 *   of the root object is "/"
 *
 * @par Example:
 * The \c /primaryAddress/city refers to the city attribute of the primaryAddress object
 * The \c /profiles#1/username refers to the username attribute of the element in profiles with id=1
 *
 * @return
 *   A JRProfile object
 **/
+ (id)profileObjectFromDictionary:(NSDictionary*)dictionary withPath:(NSString *)capturePath;
/*@}*/

/**
 * @name Dictionary Serialization/Deserialization
 **/
/*@{*/
/**
 * Creates an  NSDictionary represention of a JRProfile object
 * populated with all of the object's properties, as the dictionary's 
 * keys, and the properties' values as the dictionary's values
 *
 * @return
 *   An \e NSDictionary representation of a JRProfile object
 **/
- (NSDictionary*)toDictionary;

/**
 * @internal
 * Updates the object from an \e NSDictionary populated with some of the object's
 * properties, as the dictionary's keys, and the properties' values as the dictionary's values. 
 * This method is used by other JRCaptureObjects and should not be used by consumers of the 
 * mobile Capture library
 *
 * @param dictionary
 *   An \e NSDictionary containing keys/values which map the the object's 
 *   properties and their values/types
 *
 * @param capturePath
 *   This is the qualified name used to refer to specific elements in a record;
 *   a pound sign (#) is used to refer to plural elements with an id. The path
 *   of the root object is "/"
 *
 * @par Example:
 * The \c /primaryAddress/city refers to the city attribute of the primaryAddress object
 * The \c /profiles#1/username refers to the username attribute of the element in profiles with id=1
 *
 * @note 
 * The main difference between this method and the replaceFromDictionary:withPath:(), is that
 * in this method properties are only updated if they exist in the dictionary, and in 
 * replaceFromDictionary:withPath:(), all properties are replaced.  Even if the value is \e [NSNull null]
 * so long as the key exists in the dictionary, the property is updated.
 **/
- (void)updateFromDictionary:(NSDictionary*)dictionary withPath:(NSString *)capturePath;

/**
 * @internal
 * Replaces the object from an \e NSDictionary populated with some or all of the object's
 * properties, as the dictionary's keys, and the properties' values as the dictionary's values.
 * This method is used by other JRCaptureObjects and should not be used by consumers of the 
 * mobile Capture library
 *
 * @param dictionary
 *   An \e NSDictionary containing keys/values which map the the object's 
 *   properties and their values/types
 *
 * @param capturePath
 *   This is the qualified name used to refer to specific elements in a record;
 *   a pound sign (#) is used to refer to plural elements with an id. The path
 *   of the root object is "/"
 *
 * @par Example:
 * The \c /primaryAddress/city refers to the city attribute of the primaryAddress object
 * The \c /profiles#1/username refers to the username attribute of the element in profiles with id=1
 *
 * @note 
 * The main difference between this method and the updateFromDictionary:withPath:(), is that
 * in this method \e all the properties are replaced, and in updateFromDictionary:withPath:(),
 * they are only updated if the exist in the dictionary.  If the key does not exist in
 * the dictionary, the property is set to \e nil
 **/
- (void)replaceFromDictionary:(NSDictionary*)dictionary withPath:(NSString *)capturePath;
/*@}*/

/**
 * @name Object Introspection
 **/
/*@{*/
/**
 * TODO: Doxygen doc
 **/
- (BOOL)isEqualToProfile:(JRProfile *)otherProfile;
/**
 * TODO: Doxygen doc
 **/
- (NSDictionary*)objectProperties;
/*@}*/

/**
 * @name Manage Remotely 
 **/
/*@{*/
/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceAccountsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceAddressesArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceBooksArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceCarsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceChildrenArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceEmailsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceFoodArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceHeroesArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceImsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceInterestsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceJobInterestsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceLanguagesArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceLanguagesSpokenArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceLookingForArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceMoviesArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceMusicArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceOrganizationsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replacePetsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replacePhoneNumbersArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceProfilePhotosArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceQuotesArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceRelationshipsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceSportsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceTagsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceTurnOffsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceTurnOnsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceTvShowsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: DOXYGEN DOCS
 **/
- (void)replaceUrlsArrayOnCaptureForDelegate:(id<JRCaptureObjectDelegate>)delegate withContext:(NSObject *)context;

/**
 * TODO: Doxygen doc
 **/
- (BOOL)needsUpdate;
/*@}*/

@end
