#pragma once

#include "Swiften/Base/String.h"
#include "Swiften/Base/ByteArray.h"
#include "Swiften/Elements/Payload.h"

namespace Swift {
	class VCard : public Payload {
		public:
			VCard() {}

			void setPhoto(const ByteArray& photo) { photo_ = photo; }
			const ByteArray& getPhoto() { return photo_; }

			void setPhotoType(const String& photoType) { photoType_ = photoType; }
			const String& getPhotoType() { return photoType_; }

		private:
			ByteArray photo_;
			String photoType_;
	};
}
