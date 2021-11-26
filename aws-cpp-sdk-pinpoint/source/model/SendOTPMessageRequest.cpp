﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SendOTPMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendOTPMessageRequest::SendOTPMessageRequest() : 
    m_applicationIdHasBeenSet(false),
    m_sendOTPMessageRequestParametersHasBeenSet(false)
{
}

Aws::String SendOTPMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sendOTPMessageRequestParametersHasBeenSet)
  {
   payload = m_sendOTPMessageRequestParameters.Jsonize();
  }

  return payload.View().WriteReadable();
}




