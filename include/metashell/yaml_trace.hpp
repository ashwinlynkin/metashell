#ifndef METASHELL_YAML_TRACE_HPP
#define METASHELL_YAML_TRACE_HPP

// Metashell - Interactive C++ template metaprogramming shell
// Copyright (C) 2018, Abel Sinkovics (abel@sinkovics.hu)
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

#include <metashell/data/event_data.hpp>
#include <metashell/data/event_data_sequence.hpp>
#include <metashell/data/type_or_code_or_error.hpp>

#include <boost/optional.hpp>

#include <yaml-cpp/node/node.h>
#include <yaml-cpp/yaml.h>

#include <string>
#include <vector>

namespace metashell
{
  class yaml_trace : public data::event_data_sequence<yaml_trace>
  {
  public:
    yaml_trace(const std::string& trace_,
               data::type_or_code_or_error evaluation_result_);

    boost::optional<data::event_data> next();

  private:
    std::vector<YAML::Node> _nodes;
    std::vector<YAML::Node>::const_iterator _next;
    boost::optional<data::event_data> _evaluation_result;
  };
}

#endif
