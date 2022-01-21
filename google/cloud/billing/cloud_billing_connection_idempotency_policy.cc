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
// source: google/cloud/billing/v1/cloud_billing.proto

#include "google/cloud/billing/cloud_billing_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudBillingConnectionIdempotencyPolicy::
    ~CloudBillingConnectionIdempotencyPolicy() = default;

namespace {
class DefaultCloudBillingConnectionIdempotencyPolicy
    : public CloudBillingConnectionIdempotencyPolicy {
 public:
  ~DefaultCloudBillingConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<CloudBillingConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultCloudBillingConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency GetBillingAccount(
      google::cloud::billing::v1::GetBillingAccountRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListBillingAccounts(
      google::cloud::billing::v1::ListBillingAccountsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateBillingAccount(
      google::cloud::billing::v1::UpdateBillingAccountRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateBillingAccount(
      google::cloud::billing::v1::CreateBillingAccountRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListProjectBillingInfo(
      google::cloud::billing::v1::ListProjectBillingInfoRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetProjectBillingInfo(
      google::cloud::billing::v1::GetProjectBillingInfoRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateProjectBillingInfo(
      google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<CloudBillingConnectionIdempotencyPolicy>
MakeDefaultCloudBillingConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultCloudBillingConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google
