// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 Tencent. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#pragma once

#include "UnLuaInterface.h"
#include "Issue500Test.generated.h"

UCLASS(Blueprintable)
class UNLUATESTSUITE_API UObjectForIssue500 : public UObject, public IUnLuaInterface
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString Test();

    virtual FString GetModuleName_Implementation() const override
    {
        return TEXT("Tests.Regression.Issue500.ObjectForIssue500");
    }
};
