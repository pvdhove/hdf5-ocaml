module Type : sig
  type t =
  | GROUP
  | DATASET
  | NAMED_DATATYPE
  | NTYPES
end

module Hdr_info : sig
  module Space : sig
    type t = {
      total : int;
      meta  : int;
      mesg  : int;
      free  : int }
  end

  module Mesg : sig
    type t = {
      present : int;
      shared  : int }
  end

  type t = {
    version : int;
    nmesgs  : int;
    nchunks : int;
    flags   : int;
    space   : Space.t;
    mesg    : Mesg.t }
end

module Info : sig
  module Meta_size : sig
    type t = {
      obj : H5.Ih_info.t;
      attr : H5.Ih_info.t }
  end

  type t = {
    fileno    : int;
    addr      : H5.Addr.t;
    type_     : Type.t;
    rc        : int;
    atime     : H5.Time.t;
    mtime     : H5.Time.t;
    ctime     : H5.Time.t;
    btime     : H5.Time.t;
    num_attrs : int;
    hdr       : Hdr_info.t;
    meta_size : Meta_size.t }
end

module Msg_crt_idx : sig
  type t = int
end

external copy : Hid.t -> string -> Hid.t -> ?ocpypl:Hid.t -> ?lcpl:Hid.t -> string -> unit
  = "hdf5_h5o_copy_bytecode" "hdf5_h5o_copy"
external set_comment : Hid.t -> string -> unit = "hdf5_h5o_set_comment"
external get_info : Hid.t -> Info.t = "hdf5_h5o_get_info"
external get_info_by_name : Hid.t -> ?lapl:Hid.t -> string -> Info.t
  = "hdf5_h5o_get_info_by_name"
