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

#ifndef S3EANDROIDGOOGLEPLAYBILLING_INTERNAL_H
#define S3EANDROIDGOOGLEPLAYBILLING_INTERNAL_H

#include "s3eTypes.h"
#include "s3eAndroidGooglePlayBilling.h"
#include "s3eAndroidGooglePlayBilling_autodefs.h"


/**
 * Initialise the extension.  This is called once then the extension is first
 * accessed by s3eregister.  If this function returns S3E_RESULT_ERROR the
 * extension will be reported as not-existing on the device.
 */
s3eResult s3eAndroidGooglePlayBillingInit();

/**
 * Platform-specific initialisation, implemented on each platform
 */
s3eResult s3eAndroidGooglePlayBillingInit_platform();

/**
 * Terminate the extension.  This is called once on shutdown, but only if the
 * extension was loader and Init() was successful.
 */
void s3eAndroidGooglePlayBillingTerminate();

/**
 * Platform-specific termination, implemented on each platform
 */
void s3eAndroidGooglePlayBillingTerminate_platform();
void s3eAndroidGooglePlayBillingStart_platform(const char* base64PublicKey);

void s3eAndroidGooglePlayBillingStop_platform();

s3eResult s3eAndroidGooglePlayBillingIsSupported_platform();

void s3eAndroidGooglePlayBillingRequestPurchase_platform(const char* productID, bool inApp, const char* developerPayLoad);

void s3eAndroidGooglePlayBillingRequestProductInformation_platform(const char** inAppProducts, int numInAppProducts, const char** subProducts, int numSubProducts);

void s3eAndroidGooglePlayBillingRestoreTransactions_platform();

void s3eAndroidGooglePlayBillingConsumeItem_platform(const char* purchaseToken);


#endif /* !S3EANDROIDGOOGLEPLAYBILLING_INTERNAL_H */
