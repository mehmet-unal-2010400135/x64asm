/*
Copyright 2103 eric schkufza

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "src/moffs.h"

using namespace std;

namespace x64asm {

Moffs::~Moffs() {
	// Does nothing.
}

OpType Moffs::type() const {
	return OpType::MOFFS;
}

void Moffs::write_att(ostream& os) const {
	os << hex << showbase << val();
}

void Moffs::write_intel(ostream& os) const {
}

OpType Moffs8::type() const {
	return OpType::MOFFS_8;
}

OpType Moffs16::type() const {
	return OpType::MOFFS_16;
}

OpType Moffs32::type() const {
	return OpType::MOFFS_32;
}

OpType Moffs64::type() const {
	return OpType::MOFFS_64;
}

} // namespace x64asm