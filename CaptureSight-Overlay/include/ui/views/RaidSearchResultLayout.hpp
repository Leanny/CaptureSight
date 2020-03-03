#pragma once

#include <tesla.hpp>

class RaidSearchResultLayout : public tsl::Gui {
 public:
  RaidSearchResultLayout(u64 seed, u32 flawlessIVs);
  virtual tsl::Element* createUI();
  void AddTitleBlock(u16 x, u16 y, tsl::Screen* screen);
  void AddRaidMenuItem(tsl::element::List* denList, std::shared_ptr<csight::raid::RaidPokemon> raid, u32 advance);

 private:
  std::string m_title = "";
  u64 m_seed = 0;
  u8 m_flawlessIVs = 1;
  u32 m_firstShinyAdvance = MAX_RAID_ADVANCES;
  // Assume shiny will be star in case no nearby shinies are found
  std::string m_firstShinyTypeText = " ★ ";
};