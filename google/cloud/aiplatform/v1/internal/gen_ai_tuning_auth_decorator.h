// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/genai_tuning_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_AUTH_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/gen_ai_tuning_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GenAiTuningServiceAuth : public GenAiTuningServiceStub {
 public:
  ~GenAiTuningServiceAuth() override = default;
  GenAiTuningServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<GenAiTuningServiceStub> child);

  StatusOr<google::cloud::aiplatform::v1::TuningJob> CreateTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTuningJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TuningJob> GetTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTuningJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTuningJobsResponse>
  ListTuningJobs(grpc::ClientContext& context, Options const& options,
                 google::cloud::aiplatform::v1::ListTuningJobsRequest const&
                     request) override;

  Status CancelTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelTuningJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRebaseTunedModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::RebaseTunedModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RebaseTunedModel(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::RebaseTunedModelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<GenAiTuningServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_AUTH_DECORATOR_H
