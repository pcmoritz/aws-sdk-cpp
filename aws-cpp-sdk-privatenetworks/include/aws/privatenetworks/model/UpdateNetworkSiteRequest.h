﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class AWS_PRIVATENETWORKS_API UpdateNetworkSiteRequest : public PrivateNetworksRequest
  {
  public:
    UpdateNetworkSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkSite"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline UpdateNetworkSiteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline UpdateNetworkSiteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline UpdateNetworkSiteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline UpdateNetworkSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateNetworkSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateNetworkSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const{ return m_networkSiteArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline void SetNetworkSiteArn(const Aws::String& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline void SetNetworkSiteArn(Aws::String&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline void SetNetworkSiteArn(const char* value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline UpdateNetworkSiteRequest& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline UpdateNetworkSiteRequest& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline UpdateNetworkSiteRequest& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
