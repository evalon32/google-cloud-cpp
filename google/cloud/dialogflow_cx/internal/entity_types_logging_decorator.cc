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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#include "google/cloud/dialogflow_cx/internal/entity_types_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/entity_type.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesLogging::EntityTypesLogging(std::shared_ptr<EntityTypesStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesLogging::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const&
                 request) { return child_->GetEntityType(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesLogging::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const&
                 request) {
        return child_->CreateEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesLogging::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const&
                 request) {
        return child_->UpdateEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status EntityTypesLogging::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const&
                 request) {
        return child_->DeleteEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListEntityTypesResponse>
EntityTypesLogging::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListEntityTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::ListEntityTypesRequest const&
                 request) { return child_->ListEntityTypes(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncExportEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
                 request) {
        return child_->AsyncExportEntityTypes(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncImportEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
                 request) {
        return child_->AsyncImportEntityTypes(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> EntityTypesLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
