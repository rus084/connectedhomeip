/*
 *
 *    Copyright (c) 2023 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
package chip.devicecontroller.cluster.eventstructs

import chip.devicecontroller.cluster.*
import chip.tlv.AnonymousTag
import chip.tlv.ContextSpecificTag
import chip.tlv.Tag
import chip.tlv.TlvParsingException
import chip.tlv.TlvReader
import chip.tlv.TlvWriter

import java.util.Optional

class SwitchClusterShortReleaseEvent (
    val previousPosition: Int) {
  override fun toString(): String  = buildString {
    append("SwitchClusterShortReleaseEvent {\n")
    append("\tpreviousPosition : $previousPosition\n")
    append("}\n")
  }

  fun toTlv(tag: Tag, tlvWriter: TlvWriter) {
    tlvWriter.apply {
      startStructure(tag)
      put(ContextSpecificTag(TAG_PREVIOUS_POSITION), previousPosition)
      endStructure()
    }
  }

  companion object {
    private const val TAG_PREVIOUS_POSITION = 0

    fun fromTlv(tag: Tag, tlvReader: TlvReader) : SwitchClusterShortReleaseEvent {
      tlvReader.enterStructure(tag)
      val previousPosition = tlvReader.getInt(ContextSpecificTag(TAG_PREVIOUS_POSITION))
      
      tlvReader.exitContainer()

      return SwitchClusterShortReleaseEvent(previousPosition)
    }
  }
}