# ~~~
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

# Give application developers a hook to configure the version and hash
# downloaded from GitHub.
set(GOOGLE_CLOUD_CPP_GOOGLEAPIS_COMMIT_SHA
    ""
    CACHE STRING "Deprecated. Use GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL")
mark_as_advanced(GOOGLE_CLOUD_CPP_GOOGLEAPIS_COMMIT_SHA)
set(GOOGLE_CLOUD_CPP_GOOGLEAPIS_SHA256
    ""
    CACHE STRING
          "Deprecated. Use GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL_HASH")
mark_as_advanced(GOOGLE_CLOUD_CPP_GOOGLEAPIS_SHA256)

set(_GOOGLE_CLOUD_CPP_GOOGLEAPIS_COMMIT_SHA
    "5ff3e5298f3e330c09bd1690090f5c24f1540e86")
set(_GOOGLE_CLOUD_CPP_GOOGLEAPIS_SHA256
    "89e6d4dc90616a2f10da778e0eb090fba85d5b10c7cced4ff963409feef606cb")

set(DOXYGEN_ALIASES
    "googleapis_link{2}=\"[\\1](https://github.com/googleapis/googleapis/blob/${_GOOGLE_CLOUD_CPP_GOOGLEAPIS_COMMIT_SHA}/\\2)\""
    "googleapis_reference_link{1}=\"https://github.com/googleapis/googleapis/blob/${_GOOGLE_CLOUD_CPP_GOOGLEAPIS_COMMIT_SHA}/\\1\""
)
