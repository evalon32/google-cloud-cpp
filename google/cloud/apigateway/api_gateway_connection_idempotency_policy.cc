// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/api_gateway_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigateway {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ApiGatewayServiceConnectionIdempotencyPolicy::
    ~ApiGatewayServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultApiGatewayServiceConnectionIdempotencyPolicy
    : public ApiGatewayServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultApiGatewayServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<ApiGatewayServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultApiGatewayServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListGateways(
      google::cloud::apigateway::v1::ListGatewaysRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetGateway(
      google::cloud::apigateway::v1::GetGatewayRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateGateway(
      google::cloud::apigateway::v1::CreateGatewayRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateGateway(
      google::cloud::apigateway::v1::UpdateGatewayRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteGateway(
      google::cloud::apigateway::v1::DeleteGatewayRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListApis(
      google::cloud::apigateway::v1::ListApisRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetApi(
      google::cloud::apigateway::v1::GetApiRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateApi(
      google::cloud::apigateway::v1::CreateApiRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateApi(
      google::cloud::apigateway::v1::UpdateApiRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteApi(
      google::cloud::apigateway::v1::DeleteApiRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListApiConfigs(
      google::cloud::apigateway::v1::ListApiConfigsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetApiConfig(
      google::cloud::apigateway::v1::GetApiConfigRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateApiConfig(
      google::cloud::apigateway::v1::CreateApiConfigRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateApiConfig(
      google::cloud::apigateway::v1::UpdateApiConfigRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteApiConfig(
      google::cloud::apigateway::v1::DeleteApiConfigRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<ApiGatewayServiceConnectionIdempotencyPolicy>
MakeDefaultApiGatewayServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultApiGatewayServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway
}  // namespace cloud
}  // namespace google
