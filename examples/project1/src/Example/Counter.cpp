// Copyright 2023 YOUR ORGANIZATION. All rights reserved.
// 
// YOUR NOTICE

// -----------------------------------------------------------------------------
// File Name    : Counter.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Example/Counter.cpp

#include <Example/Counter.h>

namespace Example {
void Counter::DoPublish(::Smp::IPublication *receiver) {
}

void Counter::DoConfigure(::Smp::Services::ILogger *logger,
		::Smp::Services::ILinkRegistry *linkRegistry) {
}

void Counter::DoConnect(::Smp::ISimulator *simulator) {
}

void Counter::DoDisconnect() {
}

void Counter::_IncrementCount() {
	++count;
}
void Counter::ResetCount() {
	count = 0;
}
void Counter::_Add(::Smp::IObject *sender, ::Smp::Int32 value) {
	count += value;
}
} // namespace Example
