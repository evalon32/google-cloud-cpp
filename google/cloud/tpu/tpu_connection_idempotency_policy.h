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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_TPU_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_TPU_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/tpu/v1/cloud_tpu.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tpu {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TpuConnectionIdempotencyPolicy {
 public:
  virtual ~TpuConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<TpuConnectionIdempotencyPolicy> clone() const = 0;

  virtual google::cloud::Idempotency ListNodes(
      google::cloud::tpu::v1::ListNodesRequest request) = 0;

  virtual google::cloud::Idempotency GetNode(
      google::cloud::tpu::v1::GetNodeRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateNode(
      google::cloud::tpu::v1::CreateNodeRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteNode(
      google::cloud::tpu::v1::DeleteNodeRequest const& request) = 0;

  virtual google::cloud::Idempotency ReimageNode(
      google::cloud::tpu::v1::ReimageNodeRequest const& request) = 0;

  virtual google::cloud::Idempotency StopNode(
      google::cloud::tpu::v1::StopNodeRequest const& request) = 0;

  virtual google::cloud::Idempotency StartNode(
      google::cloud::tpu::v1::StartNodeRequest const& request) = 0;

  virtual google::cloud::Idempotency ListTensorFlowVersions(
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest request) = 0;

  virtual google::cloud::Idempotency GetTensorFlowVersion(
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) = 0;

  virtual google::cloud::Idempotency ListAcceleratorTypes(
      google::cloud::tpu::v1::ListAcceleratorTypesRequest request) = 0;

  virtual google::cloud::Idempotency GetAcceleratorType(
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) = 0;
};

std::unique_ptr<TpuConnectionIdempotencyPolicy>
MakeDefaultTpuConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_TPU_CONNECTION_IDEMPOTENCY_POLICY_H
