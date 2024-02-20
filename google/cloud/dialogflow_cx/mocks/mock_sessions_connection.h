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
// source: google/cloud/dialogflow/cx/v3/session.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_SESSIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_SESSIONS_CONNECTION_H

#include "google/cloud/dialogflow_cx/sessions_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_cx_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SessionsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SessionsClient`. To do so,
 * construct an object of type `SessionsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSessionsConnection : public dialogflow_cx::SessionsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>,
      DetectIntent,
      (google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::dialogflow::cx::v3::DetectIntentResponse>,
      ServerStreamingDetectIntent,
      (google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request),
      (override));

  MOCK_METHOD(
      (std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
           google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
           google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>),
      AsyncStreamingDetectIntent, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>,
      MatchIntent,
      (google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>,
      FulfillIntent,
      (google::cloud::dialogflow::cx::v3::FulfillIntentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::AnswerFeedback>,
      SubmitAnswerFeedback,
      (google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_SESSIONS_CONNECTION_H
