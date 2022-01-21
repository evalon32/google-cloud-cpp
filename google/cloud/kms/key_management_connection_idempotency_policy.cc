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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/key_management_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

KeyManagementServiceConnectionIdempotencyPolicy::
    ~KeyManagementServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultKeyManagementServiceConnectionIdempotencyPolicy
    : public KeyManagementServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultKeyManagementServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<KeyManagementServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultKeyManagementServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListKeyRings(
      google::cloud::kms::v1::ListKeyRingsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCryptoKeys(
      google::cloud::kms::v1::ListCryptoKeysRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCryptoKeyVersions(
      google::cloud::kms::v1::ListCryptoKeyVersionsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListImportJobs(
      google::cloud::kms::v1::ListImportJobsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetKeyRing(
      google::cloud::kms::v1::GetKeyRingRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetCryptoKey(
      google::cloud::kms::v1::GetCryptoKeyRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetCryptoKeyVersion(
      google::cloud::kms::v1::GetCryptoKeyVersionRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetPublicKey(
      google::cloud::kms::v1::GetPublicKeyRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetImportJob(
      google::cloud::kms::v1::GetImportJobRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateKeyRing(
      google::cloud::kms::v1::CreateKeyRingRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCryptoKey(
      google::cloud::kms::v1::CreateCryptoKeyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCryptoKeyVersion(
      google::cloud::kms::v1::CreateCryptoKeyVersionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ImportCryptoKeyVersion(
      google::cloud::kms::v1::ImportCryptoKeyVersionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateImportJob(
      google::cloud::kms::v1::CreateImportJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCryptoKey(
      google::cloud::kms::v1::UpdateCryptoKeyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCryptoKeyVersion(
      google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCryptoKeyPrimaryVersion(
      google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DestroyCryptoKeyVersion(
      google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RestoreCryptoKeyVersion(
      google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency Encrypt(google::cloud::kms::v1::EncryptRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency Decrypt(google::cloud::kms::v1::DecryptRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency AsymmetricSign(
      google::cloud::kms::v1::AsymmetricSignRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency AsymmetricDecrypt(
      google::cloud::kms::v1::AsymmetricDecryptRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency MacSign(google::cloud::kms::v1::MacSignRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency MacVerify(
      google::cloud::kms::v1::MacVerifyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GenerateRandomBytes(
      google::cloud::kms::v1::GenerateRandomBytesRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<KeyManagementServiceConnectionIdempotencyPolicy>
MakeDefaultKeyManagementServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultKeyManagementServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms
}  // namespace cloud
}  // namespace google
