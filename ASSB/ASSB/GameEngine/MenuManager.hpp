#pragma once
#include "EventSystem/ObjectEventManager.hpp"



namespace ASSB
{
	// Handles menus and some menu-related events.
	class QuitRequestEvent;
	class ShutdownEvent;
	class GameStartEvent;
	class KeyboardEvent;
	class PauseToggleEvent;
	class MenuManager : public EventSystem::ObjectEventManager
	{
	public:
		// Constructor
		MenuManager();
		
		// Static instance of Menu Manager
		static MenuManager *Instance;

	private:
		// Variables
		bool onMainMenu_;
		bool onPauseMenu_;

		// Member functions
		void initializeSFX();
		void updateMenuLocations();

		// Event related functions
		void quitRequest(QuitRequestEvent *e);
		void shutdownRequest(ShutdownEvent *e);
		void gameStart(GameStartEvent *e);
		void handleKeyboard(KeyboardEvent *e);
		void pauseToggle(PauseToggleEvent *e);

		// Omit
		MenuManager &operator=(const MenuManager &rhs) = delete;
		MenuManager(const MenuManager &rhs) = delete;
	};
}
