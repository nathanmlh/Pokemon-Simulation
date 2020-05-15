/**
 * \file Menu.h
 *
 * \author Nathan Holdom
 *
 * 
 */

#pragma once

#include "Trainer.h"

#include <memory>

class CMenu
{
public:

    /** Default constructor disabled */
    CMenu() = delete;

    /** Constructor that has a trainer in it 
     * \param trainer The trainer we want to link to the menu
     */
    CMenu(std::shared_ptr<CTrainer> trainer);

    /** The main loop of the menu: Allows the trainer to select any many option available */
    void MainLoop();

private:

    /// The main trainer
    std::shared_ptr<CTrainer> mTrainer;
};

