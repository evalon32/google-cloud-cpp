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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_TRACING_STUB_H

#include "google/cloud/composer/v1/internal/environments_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EnvironmentsTracingStub : public EnvironmentsStub {
 public:
  ~EnvironmentsTracingStub() override = default;

  explicit EnvironmentsTracingStub(std::shared_ptr<EnvironmentsStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(grpc::ClientContext& context,
                 google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context,
                   google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ExecuteAirflowCommandResponse>
  ExecuteAirflowCommand(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          ExecuteAirflowCommandRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               StopAirflowCommandResponse>
  StopAirflowCommand(grpc::ClientContext& context,
                     google::cloud::orchestration::airflow::service::v1::
                         StopAirflowCommandRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               PollAirflowCommandResponse>
  PollAirflowCommand(grpc::ClientContext& context,
                     google::cloud::orchestration::airflow::service::v1::
                         PollAirflowCommandRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context,
                google::cloud::orchestration::airflow::service::v1::
                    ListWorkloadsRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  CreateUserWorkloadsSecret(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsSecretRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  GetUserWorkloadsSecret(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsSecretRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListUserWorkloadsSecretsResponse>
  ListUserWorkloadsSecrets(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsSecretsRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  UpdateUserWorkloadsSecret(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsSecretRequest const& request) override;

  Status DeleteUserWorkloadsSecret(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsSecretRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  CreateUserWorkloadsConfigMap(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsConfigMapRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  GetUserWorkloadsConfigMap(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsConfigMapRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListUserWorkloadsConfigMapsResponse>
  ListUserWorkloadsConfigMaps(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsConfigMapsRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  UpdateUserWorkloadsConfigMap(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsConfigMapRequest const& request) override;

  Status DeleteUserWorkloadsConfigMap(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsConfigMapRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSaveSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncLoadSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDatabaseFailover(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               FetchDatabasePropertiesResponse>
  FetchDatabaseProperties(
      grpc::ClientContext& context,
      google::cloud::orchestration::airflow::service::v1::
          FetchDatabasePropertiesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<EnvironmentsStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<EnvironmentsStub> MakeEnvironmentsTracingStub(
    std::shared_ptr<EnvironmentsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_TRACING_STUB_H
