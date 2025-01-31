﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API DeleteWhatIfForecastRequest : public ForecastServiceRequest
  {
  public:
    DeleteWhatIfForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWhatIfForecast"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const{ return m_whatIfForecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline bool WhatIfForecastArnHasBeenSet() const { return m_whatIfForecastArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline void SetWhatIfForecastArn(const Aws::String& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline void SetWhatIfForecastArn(Aws::String&& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline void SetWhatIfForecastArn(const char* value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline DeleteWhatIfForecastRequest& WithWhatIfForecastArn(const Aws::String& value) { SetWhatIfForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline DeleteWhatIfForecastRequest& WithWhatIfForecastArn(Aws::String&& value) { SetWhatIfForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you want to
     * delete.</p>
     */
    inline DeleteWhatIfForecastRequest& WithWhatIfForecastArn(const char* value) { SetWhatIfForecastArn(value); return *this;}

  private:

    Aws::String m_whatIfForecastArn;
    bool m_whatIfForecastArnHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
