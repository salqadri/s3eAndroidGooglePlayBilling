/*
 * (C) 2001-2012 Marmalade. All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Marmalade.
 *
 * This file consists of source code released by Marmalade under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
 /*
 * android-specific implementation of the s3eAndroidMarketBilling extension.
 * Add any platform-specific functionality here.
 */

#include "s3eAndroidGooglePlayBilling_internal.h"
s3eResult s3eAndroidGooglePlayBillingInit()
{
    //Add any generic initialisation code here
    return s3eAndroidGooglePlayBillingInit_platform();
}

void s3eAndroidGooglePlayBillingTerminate()
{
    //Add any generic termination code here
    s3eAndroidGooglePlayBillingTerminate_platform();
}

void s3eAndroidGooglePlayBillingStart(const char* base64PublicKey)
{
	s3eAndroidGooglePlayBillingStart_platform(base64PublicKey);
}

void s3eAndroidGooglePlayBillingStop()
{
	s3eAndroidGooglePlayBillingStop_platform();
}

s3eResult s3eAndroidGooglePlayBillingIsSupported()
{
	return s3eAndroidGooglePlayBillingIsSupported_platform();
}

void s3eAndroidGooglePlayBillingRequestPurchase(const char* productID, bool inApp, const char* developerPayLoad)
{
	s3eAndroidGooglePlayBillingRequestPurchase_platform(productID, inApp, developerPayLoad);
}

void s3eAndroidGooglePlayBillingRequestProductInformation(const char** inAppProducts, int numInAppProducts, const char** subProducts, int numSubProducts)
{
	s3eAndroidGooglePlayBillingRequestProductInformation_platform(inAppProducts, numInAppProducts, subProducts, numSubProducts);
}

void s3eAndroidGooglePlayBillingRestoreTransactions()
{
	s3eAndroidGooglePlayBillingRestoreTransactions_platform();
}

void s3eAndroidGooglePlayBillingConsumeItem(const char* purchaseToken)
{
	s3eAndroidGooglePlayBillingConsumeItem_platform(purchaseToken);
}
