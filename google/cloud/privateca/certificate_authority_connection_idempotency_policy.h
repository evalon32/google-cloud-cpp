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
// source: google/cloud/security/privateca/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_CERTIFICATE_AUTHORITY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_CERTIFICATE_AUTHORITY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/security/privateca/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace privateca {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CertificateAuthorityServiceConnectionIdempotencyPolicy {
 public:
  virtual ~CertificateAuthorityServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      CertificateAuthorityServiceConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::Idempotency CreateCertificate(
      google::cloud::security::privateca::v1::CreateCertificateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetCertificate(
      google::cloud::security::privateca::v1::GetCertificateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListCertificates(
      google::cloud::security::privateca::v1::ListCertificatesRequest
          request) = 0;

  virtual google::cloud::Idempotency RevokeCertificate(
      google::cloud::security::privateca::v1::RevokeCertificateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateCertificate(
      google::cloud::security::privateca::v1::UpdateCertificateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ActivateCertificateAuthority(
      google::cloud::security::privateca::v1::
          ActivateCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateCertificateAuthority(
      google::cloud::security::privateca::v1::
          CreateCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency DisableCertificateAuthority(
      google::cloud::security::privateca::v1::
          DisableCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency EnableCertificateAuthority(
      google::cloud::security::privateca::v1::
          EnableCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency FetchCertificateAuthorityCsr(
      google::cloud::security::privateca::v1::
          FetchCertificateAuthorityCsrRequest const& request) = 0;

  virtual google::cloud::Idempotency GetCertificateAuthority(
      google::cloud::security::privateca::v1::
          GetCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency ListCertificateAuthorities(
      google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
          request) = 0;

  virtual google::cloud::Idempotency UndeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          UndeleteCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          DeleteCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateCertificateAuthority(
      google::cloud::security::privateca::v1::
          UpdateCertificateAuthorityRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateCaPool(
      google::cloud::security::privateca::v1::CreateCaPoolRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateCaPool(
      google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetCaPool(
      google::cloud::security::privateca::v1::GetCaPoolRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListCaPools(
      google::cloud::security::privateca::v1::ListCaPoolsRequest request) = 0;

  virtual google::cloud::Idempotency DeleteCaPool(
      google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
          request) = 0;

  virtual google::cloud::Idempotency FetchCaCerts(
      google::cloud::security::privateca::v1::FetchCaCertsRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetCertificateRevocationList(
      google::cloud::security::privateca::v1::
          GetCertificateRevocationListRequest const& request) = 0;

  virtual google::cloud::Idempotency ListCertificateRevocationLists(
      google::cloud::security::privateca::v1::
          ListCertificateRevocationListsRequest request) = 0;

  virtual google::cloud::Idempotency UpdateCertificateRevocationList(
      google::cloud::security::privateca::v1::
          UpdateCertificateRevocationListRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateCertificateTemplate(
      google::cloud::security::privateca::v1::
          CreateCertificateTemplateRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteCertificateTemplate(
      google::cloud::security::privateca::v1::
          DeleteCertificateTemplateRequest const& request) = 0;

  virtual google::cloud::Idempotency GetCertificateTemplate(
      google::cloud::security::privateca::v1::
          GetCertificateTemplateRequest const& request) = 0;

  virtual google::cloud::Idempotency ListCertificateTemplates(
      google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
          request) = 0;

  virtual google::cloud::Idempotency UpdateCertificateTemplate(
      google::cloud::security::privateca::v1::
          UpdateCertificateTemplateRequest const& request) = 0;
};

std::unique_ptr<CertificateAuthorityServiceConnectionIdempotencyPolicy>
MakeDefaultCertificateAuthorityServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_CERTIFICATE_AUTHORITY_CONNECTION_IDEMPOTENCY_POLICY_H
