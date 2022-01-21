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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_DEPLOYMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_DEPLOYMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/gaming/v1/game_server_deployments_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GameServerDeploymentsServiceConnectionIdempotencyPolicy {
 public:
  virtual ~GameServerDeploymentsServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      GameServerDeploymentsServiceConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::Idempotency ListGameServerDeployments(
      google::cloud::gaming::v1::ListGameServerDeploymentsRequest request) = 0;

  virtual google::cloud::Idempotency GetGameServerDeployment(
      google::cloud::gaming::v1::GetGameServerDeploymentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateGameServerDeployment(
      google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteGameServerDeployment(
      google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateGameServerDeployment(
      google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetGameServerDeploymentRollout(
      google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateGameServerDeploymentRollout(
      google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const&
          request) = 0;

  virtual google::cloud::Idempotency PreviewGameServerDeploymentRollout(
      google::cloud::gaming::v1::
          PreviewGameServerDeploymentRolloutRequest const& request) = 0;

  virtual google::cloud::Idempotency FetchDeploymentState(
      google::cloud::gaming::v1::FetchDeploymentStateRequest const&
          request) = 0;
};

std::unique_ptr<GameServerDeploymentsServiceConnectionIdempotencyPolicy>
MakeDefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_GAME_SERVER_DEPLOYMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
