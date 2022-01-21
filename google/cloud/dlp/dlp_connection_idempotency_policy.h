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
// source: google/privacy/dlp/v2/dlp.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_DLP_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_DLP_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dlp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DlpServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DlpServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<DlpServiceConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency InspectContent(
      google::privacy::dlp::v2::InspectContentRequest const& request) = 0;

  virtual google::cloud::Idempotency RedactImage(
      google::privacy::dlp::v2::RedactImageRequest const& request) = 0;

  virtual google::cloud::Idempotency DeidentifyContent(
      google::privacy::dlp::v2::DeidentifyContentRequest const& request) = 0;

  virtual google::cloud::Idempotency ReidentifyContent(
      google::privacy::dlp::v2::ReidentifyContentRequest const& request) = 0;

  virtual google::cloud::Idempotency ListInfoTypes(
      google::privacy::dlp::v2::ListInfoTypesRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateInspectTemplate(
      google::privacy::dlp::v2::CreateInspectTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateInspectTemplate(
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetInspectTemplate(
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request) = 0;

  virtual google::cloud::Idempotency ListInspectTemplates(
      google::privacy::dlp::v2::ListInspectTemplatesRequest request) = 0;

  virtual google::cloud::Idempotency DeleteInspectTemplate(
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateDeidentifyTemplate(
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateDeidentifyTemplate(
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetDeidentifyTemplate(
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListDeidentifyTemplates(
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request) = 0;

  virtual google::cloud::Idempotency DeleteDeidentifyTemplate(
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateJobTrigger(
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateJobTrigger(
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) = 0;

  virtual google::cloud::Idempotency HybridInspectJobTrigger(
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetJobTrigger(
      google::privacy::dlp::v2::GetJobTriggerRequest const& request) = 0;

  virtual google::cloud::Idempotency ListJobTriggers(
      google::privacy::dlp::v2::ListJobTriggersRequest request) = 0;

  virtual google::cloud::Idempotency DeleteJobTrigger(
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) = 0;

  virtual google::cloud::Idempotency ActivateJobTrigger(
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateDlpJob(
      google::privacy::dlp::v2::CreateDlpJobRequest const& request) = 0;

  virtual google::cloud::Idempotency ListDlpJobs(
      google::privacy::dlp::v2::ListDlpJobsRequest request) = 0;

  virtual google::cloud::Idempotency GetDlpJob(
      google::privacy::dlp::v2::GetDlpJobRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteDlpJob(
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request) = 0;

  virtual google::cloud::Idempotency CancelDlpJob(
      google::privacy::dlp::v2::CancelDlpJobRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateStoredInfoType(
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateStoredInfoType(
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) = 0;

  virtual google::cloud::Idempotency GetStoredInfoType(
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) = 0;

  virtual google::cloud::Idempotency ListStoredInfoTypes(
      google::privacy::dlp::v2::ListStoredInfoTypesRequest request) = 0;

  virtual google::cloud::Idempotency DeleteStoredInfoType(
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) = 0;

  virtual google::cloud::Idempotency HybridInspectDlpJob(
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) = 0;

  virtual google::cloud::Idempotency FinishDlpJob(
      google::privacy::dlp::v2::FinishDlpJobRequest const& request) = 0;
};

std::unique_ptr<DlpServiceConnectionIdempotencyPolicy>
MakeDefaultDlpServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_DLP_CONNECTION_IDEMPOTENCY_POLICY_H
