/*
 * Copyright 2024 Søren Gullach
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * You must include the following attribution in all copies or substantial portions of the Software:
 * "Søren Gullach <STM32_R7_OS@toolsbox.dk>"
 */

#pragma once

#include <assert.h>

/////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
	class glChain;

class glLink 
{
	// Allow glChain to access pNext and pPrev directly
	template<class T>
		friend class glChain;
public:
	//virtual void Init() = 0;
	
	virtual void UpdateLook() = 0;
	virtual void UpdateState(glTouchPoint_t &point) = 0;
	virtual bool IsInvalidated(gl2DPoint_t &invalidRegion) = 0;
	virtual void Invalidate() = 0;
	
	// buble event to top
	virtual void Event(glEvent event) = 0;
	
	glLink *Prev() { return pPrev; }
	glLink *Next() { return pNext; }

protected:
	glLink *pNext = nullptr, *pPrev = nullptr;
};

/////////////////////////////////////////////////////////////////////////////////////////////
// A double linked list
template<class T>
	class glChain 
	{
	public:
		// Add a widget
		void Add(T *obj)
		{
			if (!obj) return; // Check for nullptr
			
			glLink* pNewLinkObj = dynamic_cast<glLink*>(obj); // Attempt to cast to glLinkObject pointer
			if (!pNewLinkObj) 
			{
				assert(false && "Error: Object does not derive from glLink. Cannot add to glChain.");
				return;
			}

			 // Update pointers
			if (!pHead) 
			{
				pHead = pNewLinkObj;
				pTail = pNewLinkObj;
				pNewLinkObj->pPrev = pNewLinkObj->pNext = nullptr;
			}
			else 
			{
				pTail->pNext = pNewLinkObj;
				pNewLinkObj->pPrev = pTail;
				pNewLinkObj->pNext = nullptr;
				pTail = pNewLinkObj;
			}
		}

		// Function to remove an widget from the linked list
		void Remove(T *obj) 
		{
			if (!obj) return; // Check for nullptr

			glLink* pLinkObj = dynamic_cast<glLink*>(obj); // Attempt to cast to glLinkObject pointer
			if (!pLinkObj) {
				assert(false && "Error: Object does not derive from glLink. Cannot remove from glChain.");
				return;
			}

			// Search for the widget in the list
			glLink* pCurrent = pHead;
			while (pCurrent) {
				if (pCurrent == pLinkObj) {
					// Update pointers
					if (pCurrent->pPrev) {
						pCurrent->pPrev->pNext = pCurrent->pNext;
					}
					else {
						pHead = pCurrent->pNext;
					}
					if (pCurrent->pNext) {
						pCurrent->pNext->pPrev = pCurrent->pPrev;
					}
					else {
						pTail = pCurrent->pPrev;
					}
					return;
				}
				pCurrent = pCurrent->pNext;
			}

			// If the widget is not found
			assert(false && "Error: Object not found in glLink. Cannot remove.");
		}
		
		T *Head() {	return static_cast<T*>(pHead); }
		T *Tail() { return static_cast<T*>(pTail); }
	private:
		glLink* pHead = nullptr;
		glLink* pTail = nullptr;		
	};

