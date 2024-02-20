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
// source: google/cloud/sql/v1/cloud_sql_backup_runs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_BACKUP_RUNS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_BACKUP_RUNS_CLIENT_H

#include "google/cloud/sql/v1/sql_backup_runs_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing database backups.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class SqlBackupRunsServiceClient {
 public:
  explicit SqlBackupRunsServiceClient(
      std::shared_ptr<SqlBackupRunsServiceConnection> connection,
      Options opts = {});
  ~SqlBackupRunsServiceClient();

  ///@{
  /// @name Copy and move support
  SqlBackupRunsServiceClient(SqlBackupRunsServiceClient const&) = default;
  SqlBackupRunsServiceClient& operator=(SqlBackupRunsServiceClient const&) =
      default;
  SqlBackupRunsServiceClient(SqlBackupRunsServiceClient&&) = default;
  SqlBackupRunsServiceClient& operator=(SqlBackupRunsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SqlBackupRunsServiceClient const& a,
                         SqlBackupRunsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SqlBackupRunsServiceClient const& a,
                         SqlBackupRunsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the backup taken by a backup run.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlBackupRunsDeleteRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.Operation]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L787}
  /// [google.cloud.sql.v1.SqlBackupRunsDeleteRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_backup_runs.proto#L72}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlBackupRunsDeleteRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a resource containing information about a backup run.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlBackupRunsGetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.BackupRun])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.BackupRun]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_backup_runs.proto#L126}
  /// [google.cloud.sql.v1.SqlBackupRunsGetRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_backup_runs.proto#L86}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::BackupRun> Get(
      google::cloud::sql::v1::SqlBackupRunsGetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new backup run on demand.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlBackupRunsInsertRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.Operation]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L787}
  /// [google.cloud.sql.v1.SqlBackupRunsInsertRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_backup_runs.proto#L98}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlBackupRunsInsertRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists all backup runs associated with the project or a given instance
  /// and configuration in the reverse chronological order of the backup
  /// initiation time.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlBackupRunsListRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.BackupRunsListResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.BackupRunsListResponse]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_backup_runs.proto#L193}
  /// [google.cloud.sql.v1.SqlBackupRunsListRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_backup_runs.proto#L109}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::BackupRunsListResponse> List(
      google::cloud::sql::v1::SqlBackupRunsListRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SqlBackupRunsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_BACKUP_RUNS_CLIENT_H
