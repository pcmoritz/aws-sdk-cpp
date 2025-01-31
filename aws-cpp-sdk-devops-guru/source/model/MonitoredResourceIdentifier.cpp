﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/MonitoredResourceIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

MonitoredResourceIdentifier::MonitoredResourceIdentifier() : 
    m_monitoredResourceNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourcePermission(ResourcePermission::NOT_SET),
    m_resourcePermissionHasBeenSet(false)
{
}

MonitoredResourceIdentifier::MonitoredResourceIdentifier(JsonView jsonValue) : 
    m_monitoredResourceNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourcePermission(ResourcePermission::NOT_SET),
    m_resourcePermissionHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoredResourceIdentifier& MonitoredResourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoredResourceName"))
  {
    m_monitoredResourceName = jsonValue.GetString("MonitoredResourceName");

    m_monitoredResourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourcePermission"))
  {
    m_resourcePermission = ResourcePermissionMapper::GetResourcePermissionForName(jsonValue.GetString("ResourcePermission"));

    m_resourcePermissionHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoredResourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_monitoredResourceNameHasBeenSet)
  {
   payload.WithString("MonitoredResourceName", m_monitoredResourceName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_resourcePermissionHasBeenSet)
  {
   payload.WithString("ResourcePermission", ResourcePermissionMapper::GetNameForResourcePermission(m_resourcePermission));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
