﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/RuleAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace RuleActionMapper
      {

        static const int allow_HASH = HashingUtils::HashString("allow");
        static const int deny_HASH = HashingUtils::HashString("deny");


        RuleAction GetRuleActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allow_HASH)
          {
            return RuleAction::allow;
          }
          else if (hashCode == deny_HASH)
          {
            return RuleAction::deny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleAction>(hashCode);
          }

          return RuleAction::NOT_SET;
        }

        Aws::String GetNameForRuleAction(RuleAction enumValue)
        {
          switch(enumValue)
          {
          case RuleAction::allow:
            return "allow";
          case RuleAction::deny:
            return "deny";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleActionMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
