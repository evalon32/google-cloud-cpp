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
// source: google/cloud/recommender/v1/recommender_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_RECOMMENDER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_RECOMMENDER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/recommender/v1/recommender_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace recommender {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RecommenderConnectionIdempotencyPolicy {
 public:
  virtual ~RecommenderConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<RecommenderConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency ListInsights(
      google::cloud::recommender::v1::ListInsightsRequest request) = 0;

  virtual google::cloud::Idempotency GetInsight(
      google::cloud::recommender::v1::GetInsightRequest const& request) = 0;

  virtual google::cloud::Idempotency MarkInsightAccepted(
      google::cloud::recommender::v1::MarkInsightAcceptedRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListRecommendations(
      google::cloud::recommender::v1::ListRecommendationsRequest request) = 0;

  virtual google::cloud::Idempotency GetRecommendation(
      google::cloud::recommender::v1::GetRecommendationRequest const&
          request) = 0;

  virtual google::cloud::Idempotency MarkRecommendationClaimed(
      google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
          request) = 0;

  virtual google::cloud::Idempotency MarkRecommendationSucceeded(
      google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
          request) = 0;

  virtual google::cloud::Idempotency MarkRecommendationFailed(
      google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
          request) = 0;
};

std::unique_ptr<RecommenderConnectionIdempotencyPolicy>
MakeDefaultRecommenderConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_RECOMMENDER_CONNECTION_IDEMPOTENCY_POLICY_H
