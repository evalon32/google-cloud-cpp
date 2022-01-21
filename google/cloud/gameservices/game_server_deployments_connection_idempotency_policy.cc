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
// source: google/cloud/gaming/v1/game_server_deployments_service.proto

#include "google/cloud/gameservices/game_server_deployments_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    ~GameServerDeploymentsServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy
    : public GameServerDeploymentsServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy() override =
      default;

  /// Create a new copy of this object.
  std::unique_ptr<GameServerDeploymentsServiceConnectionIdempotencyPolicy>
  clone() const override {
    return absl::make_unique<
        DefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListGameServerDeployments(
      google::cloud::gaming::v1::ListGameServerDeploymentsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetGameServerDeployment(
      google::cloud::gaming::v1::GetGameServerDeploymentRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateGameServerDeployment(
      google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteGameServerDeployment(
      google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateGameServerDeployment(
      google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetGameServerDeploymentRollout(
      google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateGameServerDeploymentRollout(
      google::cloud::gaming::v1::
          UpdateGameServerDeploymentRolloutRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency PreviewGameServerDeploymentRollout(
      google::cloud::gaming::v1::
          PreviewGameServerDeploymentRolloutRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency FetchDeploymentState(
      google::cloud::gaming::v1::FetchDeploymentStateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<GameServerDeploymentsServiceConnectionIdempotencyPolicy>
MakeDefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google
