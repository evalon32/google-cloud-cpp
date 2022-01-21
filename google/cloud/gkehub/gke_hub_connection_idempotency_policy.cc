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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/gke_hub_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkehub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GkeHubConnectionIdempotencyPolicy::~GkeHubConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultGkeHubConnectionIdempotencyPolicy
    : public GkeHubConnectionIdempotencyPolicy {
 public:
  ~DefaultGkeHubConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<GkeHubConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultGkeHubConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListMemberships(
      google::cloud::gkehub::v1::ListMembershipsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListFeatures(
      google::cloud::gkehub::v1::ListFeaturesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetMembership(
      google::cloud::gkehub::v1::GetMembershipRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetFeature(
      google::cloud::gkehub::v1::GetFeatureRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateMembership(
      google::cloud::gkehub::v1::CreateMembershipRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateFeature(
      google::cloud::gkehub::v1::CreateFeatureRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteMembership(
      google::cloud::gkehub::v1::DeleteMembershipRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteFeature(
      google::cloud::gkehub::v1::DeleteFeatureRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateMembership(
      google::cloud::gkehub::v1::UpdateMembershipRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateFeature(
      google::cloud::gkehub::v1::UpdateFeatureRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GenerateConnectManifest(
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const&)
      override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<GkeHubConnectionIdempotencyPolicy>
MakeDefaultGkeHubConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultGkeHubConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub
}  // namespace cloud
}  // namespace google
