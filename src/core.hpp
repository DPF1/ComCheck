///
/// \file core.hpp
/// \brief Header for core system
/// \author David Feraud
/// \version 1
///

#ifndef CORE_HPP
#define CORE_HPP

#include <cstring>
#include <dirent.h>

#include "plugin.hpp"

class Core
{
	public :
	
		// --- DESTRUCTORS ---
		///
		/// \brief Destructor
		///
		~Core() ;
		
		// --- GETTERS ---
		///
		/// \brief Getter for instance
		/// \return Single instance of Core
		///
		static Core * get_instance() ;
		
		// --- SETTERS ---
		///
		/// \brief Setter for project's repository
		/// \param address Address of project's repository
		///
		inline void set_repository( const std::string & address )
			{ repository_ = address ; }

		// --- METHODS ---
		///
		/// \brief Loop for text mode
		///
		void loop() ;

		///
		/// \brief Prepare the analyze
		///
		/// Looking for every files matching plugin's extensions and create a File object for each file.
		///
		void prepare() ;

	protected :
	
		// --- CONSTRUCTORS ---
		///
		/// \brief Constructor
		///
		Core() ;
		
		// --- METHODS ---
		///
		/// \brief Load plugins
		///
		void load_plugins() ;

		///
		/// \brief Unload plugins
		///
		void unload_plugins() ;
		
		// --- ATTRIBUTES ---
		std::string repository_ ; ///< Address of project's repository
		std::vector< Plugin * > plugins_ ; ///< List of plugins
		unsigned short chosen_plugin_ ; ///< Index of the chosen plugin
		
		// --- STATIC ATTRIBUTES ---
		static Core * _instance_ ; ///< Single instance of Core		
} ;

#endif // CORE_HPP