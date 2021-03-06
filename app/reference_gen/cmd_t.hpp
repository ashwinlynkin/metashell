#ifndef REFERENCE_GEN_CMD_T_HPP
#define REFERENCE_GEN_CMD_T_HPP

// Metashell - Interactive C++ template metaprogramming shell
// Copyright (C) 2017, Abel Sinkovics (abel@sinkovics.hu)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <boost/filesystem/path.hpp>

#include <functional>
#include <string>

class cmd_t
{
public:
  typedef std::function<void(std::ostream&)> callback;

  cmd_t(boost::filesystem::path path_, std::string marker_, callback func_);

  const boost::filesystem::path& path() const;

  std::string generate(const std::string& original_content_) const;

private:
  boost::filesystem::path _path;
  std::string _marker;
  callback _func;
};

#endif
