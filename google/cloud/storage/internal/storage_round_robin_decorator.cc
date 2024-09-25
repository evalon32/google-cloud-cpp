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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_round_robin_decorator.h"
#include <memory>
#include <mutex>
#include <vector>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageRoundRobin::StorageRoundRobin(
    std::vector<std::shared_ptr<StorageStub>> children)
    : children_(std::move(children)) {}

Status StorageRoundRobin::DeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteBucketRequest const& request) {
  return Child()->DeleteBucket(context, options, request);
}

StatusOr<google::storage::v2::Bucket> StorageRoundRobin::GetBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetBucketRequest const& request) {
  return Child()->GetBucket(context, options, request);
}

StatusOr<google::storage::v2::Bucket> StorageRoundRobin::CreateBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateBucketRequest const& request) {
  return Child()->CreateBucket(context, options, request);
}

StatusOr<google::storage::v2::ListBucketsResponse>
StorageRoundRobin::ListBuckets(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListBucketsRequest const& request) {
  return Child()->ListBuckets(context, options, request);
}

StatusOr<google::storage::v2::Bucket>
StorageRoundRobin::LockBucketRetentionPolicy(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  return Child()->LockBucketRetentionPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> StorageRoundRobin::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return Child()->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> StorageRoundRobin::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return Child()->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
StorageRoundRobin::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return Child()->TestIamPermissions(context, options, request);
}

StatusOr<google::storage::v2::Bucket> StorageRoundRobin::UpdateBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateBucketRequest const& request) {
  return Child()->UpdateBucket(context, options, request);
}

StatusOr<google::storage::v2::Object> StorageRoundRobin::ComposeObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ComposeObjectRequest const& request) {
  return Child()->ComposeObject(context, options, request);
}

Status StorageRoundRobin::DeleteObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteObjectRequest const& request) {
  return Child()->DeleteObject(context, options, request);
}

StatusOr<google::storage::v2::Object> StorageRoundRobin::RestoreObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::RestoreObjectRequest const& request) {
  return Child()->RestoreObject(context, options, request);
}

StatusOr<google::storage::v2::CancelResumableWriteResponse>
StorageRoundRobin::CancelResumableWrite(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CancelResumableWriteRequest const& request) {
  return Child()->CancelResumableWrite(context, options, request);
}

StatusOr<google::storage::v2::Object> StorageRoundRobin::GetObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetObjectRequest const& request) {
  return Child()->GetObject(context, options, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageRoundRobin::ReadObject(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::storage::v2::ReadObjectRequest const& request) {
  return Child()->ReadObject(std::move(context), options, request);
}

StatusOr<google::storage::v2::Object> StorageRoundRobin::UpdateObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateObjectRequest const& request) {
  return Child()->UpdateObject(context, options, request);
}

std::unique_ptr<google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageRoundRobin::WriteObject(std::shared_ptr<grpc::ClientContext> context,
                               Options const& options) {
  return Child()->WriteObject(std::move(context), options);
}

std::unique_ptr<google::cloud::AsyncStreamingReadWriteRpc<
    google::storage::v2::BidiWriteObjectRequest,
    google::storage::v2::BidiWriteObjectResponse>>
StorageRoundRobin::AsyncBidiWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  return Child()->AsyncBidiWriteObject(cq, std::move(context),
                                       std::move(options));
}

StatusOr<google::storage::v2::ListObjectsResponse>
StorageRoundRobin::ListObjects(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListObjectsRequest const& request) {
  return Child()->ListObjects(context, options, request);
}

StatusOr<google::storage::v2::RewriteResponse> StorageRoundRobin::RewriteObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::RewriteObjectRequest const& request) {
  return Child()->RewriteObject(context, options, request);
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageRoundRobin::StartResumableWrite(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::StartResumableWriteRequest const& request) {
  return Child()->StartResumableWrite(context, options, request);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageRoundRobin::QueryWriteStatus(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  return Child()->QueryWriteStatus(context, options, request);
}

StatusOr<google::storage::v2::ServiceAccount>
StorageRoundRobin::GetServiceAccount(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetServiceAccountRequest const& request) {
  return Child()->GetServiceAccount(context, options, request);
}

StatusOr<google::storage::v2::CreateHmacKeyResponse>
StorageRoundRobin::CreateHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateHmacKeyRequest const& request) {
  return Child()->CreateHmacKey(context, options, request);
}

Status StorageRoundRobin::DeleteHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteHmacKeyRequest const& request) {
  return Child()->DeleteHmacKey(context, options, request);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageRoundRobin::GetHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetHmacKeyRequest const& request) {
  return Child()->GetHmacKey(context, options, request);
}

StatusOr<google::storage::v2::ListHmacKeysResponse>
StorageRoundRobin::ListHmacKeys(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListHmacKeysRequest const& request) {
  return Child()->ListHmacKeys(context, options, request);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageRoundRobin::UpdateHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateHmacKeyRequest const& request) {
  return Child()->UpdateHmacKey(context, options, request);
}

Status StorageRoundRobin::DeleteNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteNotificationConfigRequest const& request) {
  return Child()->DeleteNotificationConfig(context, options, request);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageRoundRobin::GetNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetNotificationConfigRequest const& request) {
  return Child()->GetNotificationConfig(context, options, request);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageRoundRobin::CreateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateNotificationConfigRequest const& request) {
  return Child()->CreateNotificationConfig(context, options, request);
}

StatusOr<google::storage::v2::ListNotificationConfigsResponse>
StorageRoundRobin::ListNotificationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListNotificationConfigsRequest const& request) {
  return Child()->ListNotificationConfigs(context, options, request);
}

future<StatusOr<google::storage::v2::Object>>
StorageRoundRobin::AsyncComposeObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::ComposeObjectRequest const& request) {
  return Child()->AsyncComposeObject(cq, std::move(context), std::move(options),
                                     request);
}

future<Status> StorageRoundRobin::AsyncDeleteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::DeleteObjectRequest const& request) {
  return Child()->AsyncDeleteObject(cq, std::move(context), std::move(options),
                                    request);
}

std::unique_ptr<google::cloud::internal::AsyncStreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageRoundRobin::AsyncReadObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::ReadObjectRequest const& request) {
  return Child()->AsyncReadObject(cq, std::move(context), std::move(options),
                                  request);
}

std::unique_ptr<google::cloud::internal::AsyncStreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageRoundRobin::AsyncWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  return Child()->AsyncWriteObject(cq, std::move(context), std::move(options));
}

future<StatusOr<google::storage::v2::RewriteResponse>>
StorageRoundRobin::AsyncRewriteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::RewriteObjectRequest const& request) {
  return Child()->AsyncRewriteObject(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::storage::v2::StartResumableWriteResponse>>
StorageRoundRobin::AsyncStartResumableWrite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::StartResumableWriteRequest const& request) {
  return Child()->AsyncStartResumableWrite(cq, std::move(context),
                                           std::move(options), request);
}

future<StatusOr<google::storage::v2::QueryWriteStatusResponse>>
StorageRoundRobin::AsyncQueryWriteStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  return Child()->AsyncQueryWriteStatus(cq, std::move(context),
                                        std::move(options), request);
}

std::shared_ptr<StorageStub> StorageRoundRobin::Child() {
  std::unique_lock<std::mutex> lk(mu_);
  auto const current = current_;
  if (++current_ == children_.size()) current_ = 0;
  lk.unlock();
  return children_[current];
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
