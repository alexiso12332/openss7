/*
 @(#) src/java/org/openss7/ss7/mtp/MtpUserStatusEvent.java <p>
 
 Copyright &copy; 2008-2015  Monavacon Limited <a href="http://www.monavacon.com/">&lt;http://www.monavacon.com/&gt;</a>. <br>
 Copyright &copy; 2001-2008  OpenSS7 Corporation <a href="http://www.openss7.com/">&lt;http://www.openss7.com/&gt;</a>. <br>
 Copyright &copy; 1997-2001  Brian F. G. Bidulock <a href="mailto:bidulock@openss7.org">&lt;bidulock@openss7.org&gt;</a>. <p>
 
 All Rights Reserved. <p>
 
 This program is free software: you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation, version 3 of the license. <p>
 
 This program is distributed in the hope that it will be useful, but <b>WITHOUT
 ANY WARRANTY</b>; without even the implied warranty of <b>MERCHANTABILITY</b>
 or <b>FITNESS FOR A PARTICULAR PURPOSE</b>.  See the GNU Affero General Public
 License for more details. <p>
 
 You should have received a copy of the GNU Affero General Public License along
 with this program.  If not, see
 <a href="http://www.gnu.org/licenses/">&lt;http://www.gnu.org/licenses/&gt</a>,
 or write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA. <p>
 
 <em>U.S. GOVERNMENT RESTRICTED RIGHTS</em>.  If you are licensing this
 Software on behalf of the U.S. Government ("Government"), the following
 provisions apply to you.  If the Software is supplied by the Department of
 Defense ("DoD"), it is classified as "Commercial Computer Software" under
 paragraph 252.227-7014 of the DoD Supplement to the Federal Acquisition
 Regulations ("DFARS") (or any successor regulations) and the Government is
 acquiring only the license rights granted herein (the license rights
 customarily provided to non-Government users).  If the Software is supplied to
 any unit or agency of the Government other than DoD, it is classified as
 "Restricted Computer Software" and the Government's rights in the Software are
 defined in paragraph 52.227-19 of the Federal Acquisition Regulations ("FAR")
 (or any successor regulations) or, in the cases of NASA, in paragraph
 18.52.227-86 of the NASA Supplement to the FAR (or any successor regulations). <p>
 
 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See
 <a href="http://www.openss7.com/">http://www.openss7.com/</a>
 */

package org.openss7.ss7.mtp;

import org.openss7.ss7.*;

/**
  * This class models the MTP-STATUS (user) Indication primitive of
  * Q.704, ANSI T1.111.4, and other national standards; it also models
  * the DUPU messages of M3UA (RFC 4666).
  * This event is issued to inform the Jain MTP User that signalling
  * traffic for an affected remote MTP User has changed status.  The
  * status can be one of: <ul>
  * <li>user inaccessible (permanent - reason: unequipped),
  * <li>user inaccessible (transient - reason: unavailable),
  * <li>user inaccessible (reason: unknown). </ul>
  */
public class MtpUserStatusEvent extends MtpUserManagementEvent {
    private UserStatus userStatus;
    public MtpUserStatusEvent(java.lang.Object source,
            MtpUserAddress userAddress, UserStatus userStatus) {
        super(source, userAddress);
        setUserStatus(userStatus);
    }
    /** Sets the user status.
      * @param userStatus
      * The user status of the event.  This is one of: <ul>
      * <li>{@link UserStatus#UNEQUIPPED UNEQUIPPED},
      * <li>{@link UserStatus#UNAVAILABLE UNAVAILABLE},
      * <li>{@link UserStatus#INACCESSIBLE INACCESSIBLE}. </ul>
      */
    public void setUserStatus(UserStatus userStatus) {
        this.userStatus = userStatus;
    }
    /** Gets the user status.
      * @return
      * The user status of the event.  This is one of: <ul>
      * <li>{@link UserStatus#UNEQUIPPED UNEQUIPPED},
      * <li>{@link UserStatus#UNAVAILABLE UNAVAILABLE},
      * <li>{@link UserStatus#INACCESSIBLE INACCESSIBLE}. </ul>
      */
    public UserStatus getUserStatus() {
        return userStatus;
    }
}

// vim: sw=4 et tw=72 com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS,\://,b\:#,\:%,\:XCOMM,n\:>,fb\:-

