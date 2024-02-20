// Copyright 2023 Google LLC
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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_connection.h"
#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_connection_impl.h"
#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_option_defaults.h"
#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_stub_factory.h"
#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_tracing_connection.h"
#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecaptchaEnterpriseServiceConnection::~RecaptchaEnterpriseServiceConnection() =
    default;

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceConnection::CreateAssessment(
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceConnection::AnnotateAssessment(
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnection::CreateKey(
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnection::ListKeys(
    google::cloud::recaptchaenterprise::v1::
        ListKeysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::recaptchaenterprise::v1::Key>>();
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceConnection::RetrieveLegacySecretKey(
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnection::GetKey(
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnection::UpdateKey(
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status RecaptchaEnterpriseServiceConnection::DeleteKey(
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceConnection::MigrateKey(
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceConnection::GetMetrics(
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnection::CreateFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::
        CreateFirewallPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnection::ListFirewallPolicies(
    google::cloud::recaptchaenterprise::v1::
        ListFirewallPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::recaptchaenterprise::v1::FirewallPolicy>>();
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnection::GetFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceConnection::UpdateFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::
        UpdateFirewallPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status RecaptchaEnterpriseServiceConnection::DeleteFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::
        DeleteFirewallPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
RecaptchaEnterpriseServiceConnection::ReorderFirewallPolicies(
    google::cloud::recaptchaenterprise::v1::
        ReorderFirewallPoliciesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>
RecaptchaEnterpriseServiceConnection::ListRelatedAccountGroups(
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>>();
}

StreamRange<
    google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
RecaptchaEnterpriseServiceConnection::ListRelatedAccountGroupMemberships(
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>>();
}

StreamRange<
    google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
RecaptchaEnterpriseServiceConnection::SearchRelatedAccountGroupMemberships(
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>>();
}

std::shared_ptr<RecaptchaEnterpriseServiceConnection>
MakeRecaptchaEnterpriseServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 RecaptchaEnterpriseServicePolicyOptionList>(
      options, __func__);
  options =
      recaptchaenterprise_v1_internal::RecaptchaEnterpriseServiceDefaultOptions(
          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = recaptchaenterprise_v1_internal::
      CreateDefaultRecaptchaEnterpriseServiceStub(std::move(auth), options);
  return recaptchaenterprise_v1_internal::
      MakeRecaptchaEnterpriseServiceTracingConnection(
          std::make_shared<recaptchaenterprise_v1_internal::
                               RecaptchaEnterpriseServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1
}  // namespace cloud
}  // namespace google
