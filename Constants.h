//
//  Constants.h
//  SafeExamBrowser
//
//  Created by Daniel Schneider on 29.12.11.
//  Copyright (c) 2010-2014 Daniel R. Schneider, ETH Zurich, 
//  Educational Development and Technology (LET), 
//  based on the original idea of Safe Exam Browser 
//  by Stefan Schneider, University of Giessen
//  Project concept: Thomas Piendl, Daniel R. Schneider, 
//  Dirk Bauer, Kai Reuter, Tobias Halbherr, Karsten Burger, Marco Lehre, 
//  Brigitte Schmucki, Oliver Rahs. French localization: Nicolas Dunand
//
//  ``The contents of this file are subject to the Mozilla Public License
//  Version 1.1 (the "License"); you may not use this file except in
//  compliance with the License. You may obtain a copy of the License at
//  http://www.mozilla.org/MPL/
//  
//  Software distributed under the License is distributed on an "AS IS"
//  basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
//  License for the specific language governing rights and limitations
//  under the License.
//  
//  The Original Code is Safe Exam Browser for Mac OS X.
//  
//  The Initial Developer of the Original Code is Daniel R. Schneider.
//  Portions created by Daniel R. Schneider are Copyright 
//  (c) 2010-2014 Daniel R. Schneider, ETH Zurich, Educational Development
//  and Technology (LET), based on the original idea of Safe Exam Browser 
//  by Stefan Schneider, University of Giessen. All Rights Reserved.
//  
//  Contributor(s): ______________________________________.
//

#ifndef SafeExamBrowser_Constants_h
#define SafeExamBrowser_Constants_h


#define sebConfigFilePrefixLength               4
#define publicKeyHashLenght                     20

enum {
    browserViewModeWindow                       = 0,
    browserViewModeFullscreen                   = 1
};
typedef NSUInteger browserViewModes;


enum {
    browserWindowPositioningLeft                = 0,
    browserWindowPositioningCenter              = 1,
    browserWindowPositioningRight               = 2
};
typedef NSUInteger browserWindowPositionings;


enum {
    certificateTypeSSLClientCertificate         = 0,
    certificateTypeIdentity                     = 1,
};
typedef NSUInteger certificateTypes;


enum {
    manuallyWithFileRequester                   = 0,
    attemptUploadSameFileDownloadedBefore       = 1,
    onlyAllowUploadSameFileDownloadedBefore     = 2
};
typedef NSUInteger chooseFileToUploadPolicies;


enum {
    FetchingIdentities                          = 0
};
typedef NSUInteger cryptoIdentities;


enum {
    getGenerallyBlocked                         = 0,
    openInSameWindow                            = 1,
    openInNewWindow                             = 2
};
typedef NSUInteger newBrowserWindowPolicies;


enum {
    operatingSystemOSX                          = 0,
    operatingSystemWin                          = 1,
};
typedef NSUInteger operatingSystems;


enum {
    useSystemProxySettings                      = 0,
    useSEBProxySettings                         = 1,
};
typedef NSUInteger proxySettingsPolicies;


enum {
    sebConfigPurposeStartingExam                = 0,
    sebConfigPurposeConfiguringClient           = 1
};
typedef NSUInteger sebConfigPurposes;


enum {
    SEBEnterPasswordCancel                      = 0,
    SEBEnterPasswordOK                          = 1
};
typedef NSUInteger SEBEnterPasswordResponse;


enum {
    sebModeStartURL                             = 0,
    sebModeSebServer                            = 1
};
typedef NSUInteger sebModes;


enum {
    ignoreService                               = 0,
    indicateMissingService                      = 1,
    forceSebService                             = 2
};
typedef NSUInteger sebServicePolicies;


enum {
    URLFilterActionBlock                        = 0,
    URLFilterActionAllow                        = 1,
    URLFilterActionSkip                         = 2,
    URLFilterActionAnd                          = 3,
    URLFilterActionOr                           = 4
};
typedef NSUInteger URLFilterRuleActions;


enum {
    SEBDockItemTypeLeftPinned                   = 0,
    SEBDockItemTypeCenter                       = 1,
    SEBDockItemTypeRightPinned                  = 2
};
typedef NSUInteger SEBDockItemType;


static NSString __unused *userDefaultsMasala = @"D𝈭il𝈖Ch𝈒a𝉇ht𝈁a𝉈Hai1972";

static NSString __unused *sebErrorDomain = @"org.safeexambrowser.SEBCryptor";

static unsigned char __unused keyUsageServerAuthentication[8] = {0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x01};

#endif
