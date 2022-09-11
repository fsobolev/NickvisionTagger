#pragma once

#include "../models/configuration.hpp"

namespace NickvisionTagger::Controllers
{
    /**
     * A controller for PreferencesDialog
     */
    class PreferencesDialogController
    {
    public:
        /**
         * Constructs a PreferencesDialogController
         *
         * @param configuration The configuration fot the application (Stored as reference)
         */
    	PreferencesDialogController(NickvisionTagger::Models::Configuration& configuration);
	/**
	 * Gets the theme from the configuration as an int
	 *
	 * @returns The theme from the configuration as an int
	 */
    	int getThemeAsInt() const;
    	/**
    	 * Sets the theme in the configuration
    	 *
    	 * @param theme The new theme as an int
    	 */
    	void setTheme(int theme);
    	/**
    	 * Gets whether or not the application is first time open from configuration
    	 *
    	 * @returns True for first time open, else false
    	 */
    	bool getIsFirstTimeOpen() const;
    	/**
    	 * Sets whether or not the application is first time open in the configuration
    	 *
    	 * @param isFirstTimeOpen True for is first time open, else false
    	 */
    	void setIsFirstTimeOpen(bool isFirstTimeOpen);
    	/**
    	 * Gets whether or not to include subfolders when scanning for music files in a music folder
    	 *
    	 * @returns True to include subfolders, else false
    	 */
    	bool getIncludeSubfolders() const;
    	/**
    	 * Sets whether or not to include subfolders when scanning for music files in a music folder
    	 *
    	 * @param includeSubfolders True to include subfolders, else false
    	 */
    	void setIncludeSubfolders(bool includeSubfolders);
    	/**
    	 * Gets whether or not to remember last opened music folder to reopen on application startup
    	 *
    	 * @returns True to remember last opened music folder, else false
    	 */
    	bool getRememberLastOpenedFolder() const;
    	/**
    	 * Sets whether or not to remember last opened music folder to reopen on application startup
    	 *
    	 * @param rememberLastOpenedFolder True to remember last opened music folder, else false
    	 */
    	void setRememberLastOpenedFolder(bool rememberLastOpenedFolder);
    	/**
    	 * Gets whether or not to preserve the modification time stamp of a music file
    	 *
    	 * @returns True to preserve modification time stamp, else false
    	 */
    	bool getPreserveModificationTimeStamp() const;
    	/**
    	 * Sets whether or not to preserve the modification time stamp of a music file
    	 *
    	 * @param preserveModificationTimeStamp True to preserve modification time stamp, else false
    	 */
    	void setPreserveModificationTimeStamp(bool preserveModificationTimeStamp);
    	/**
    	 * Saves the configuration file
    	 */
    	void saveConfiguration() const;

    private:
	NickvisionTagger::Models::Configuration& m_configuration;
    };
}