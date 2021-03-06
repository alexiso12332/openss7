/*
 @(#) src/java/javax/jain/ss7/inap/datatype/DigitsGenericNumber.java <p>
 
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

package javax.jain.ss7.inap.datatype;

import javax.jain.ss7.inap.constants.*;
import javax.jain.ss7.inap.*;
import javax.jain.ss7.*;
import javax.jain.*;

/** This Class defines the digits in the Generic Number Format. (Encoded
  * as in Q.763)
  * @version 1.2.2
  * @author Monavacon Limited
  */
public class DigitsGenericNumber implements java.io.Serializable {
    /** Constructor For DigitsGenericNumber.  */
    public DigitsGenericNumber(int numberQualifierIndicator,
            int natureOfAddressIndicator, int numberIncompleteIndicator,
            int numberingPlanIndicator,
            int addressPresentationRestrictedIndicator,
            int screeningIndicator, java.lang.String addressSignal) {
        setNumberQualifierIndicator(numberQualifierIndicator);
        setNatureOfAddressIndicator(natureOfAddressIndicator);
        setNumberIncompleteIndicator(numberIncompleteIndicator);
        setNumberingPlanIndicator(numberingPlanIndicator);
        setAddressPresentationRestrictedIndicator(addressPresentationRestrictedIndicator);
        setScreeningIndicator(screeningIndicator);
        setAddressSignal(addressSignal);
    }
    /** Gets Number Qualifier Indicator.  */
    public int getNumberQualifierIndicator() {
        return numberQualifierIndicator;
    }
    /** Sets Number Qualifier Indicator.  */
    public void setNumberQualifierIndicator(int numberQualifierIndicator) {
        this.numberQualifierIndicator = numberQualifierIndicator;
    }
    /** Gets Nature Of Address Indicator.  */
    public int getNatureOfAddressIndicator() {
        return natureOfAddressIndicator;
    }
    /** Sets Nature Of Address Indicator.  */
    public void setNatureOfAddressIndicator(int natureOfAddressIndicator) {
        this.natureOfAddressIndicator = natureOfAddressIndicator;
    }
    /** Gets Number Incomplete Indicator.  */
    public int getNumberIncompleteIndicator() {
        return numberIncompleteIndicator;
    }
    /** Sets Number Incomplete Indicator.  */
    public void setNumberIncompleteIndicator(int numberIncompleteIndicator) {
        this.numberIncompleteIndicator = numberIncompleteIndicator;
    }
    /** Gets Numbering Plan Indicator.  */
    public int getNumberingPlanIndicator() {
        return numberingPlanIndicator;
    }
    /** Sets Numbering Plan Indicator.  */
    public void setNumberingPlanIndicator(int numberingPlanIndicator) {
        this.numberingPlanIndicator = numberingPlanIndicator;
    }
    /** Gets Address Presentation Restricted Indicator.  */
    public int getAddressPresentationRestrictedIndicator() {
        return addressPresentationRestrictedIndicator;
    }
    /** Sets Address Presentation Restricted Indicator.  */
    public void setAddressPresentationRestrictedIndicator(int addressPresentationRestrictedIndicator) {
        this.addressPresentationRestrictedIndicator = addressPresentationRestrictedIndicator;
    }
    /** Gets Screening Indicator.  */
    public int getScreeningIndicator() {
        return screeningIndicator;
    }
    /** Sets Screening Indicator.  */
    public void setScreeningIndicator(int screeningIndicator) {
        this.screeningIndicator = screeningIndicator;
    }
    /** Gets Address Signal.  */
    public java.lang.String getAddressSignal() {
        return addressSignal;
    }
    /** Sets Address Signal.  */
    public void setAddressSignal(java.lang.String addressSignal) {
        this.addressSignal = addressSignal;
    }
    private int numberQualifierIndicator;
    private int natureOfAddressIndicator;
    private int numberIncompleteIndicator;
    private int numberingPlanIndicator;
    private int addressPresentationRestrictedIndicator;
    private int screeningIndicator;
    private java.lang.String addressSignal;
}
// vim: sw=4 et tw=72 com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS,\://,b\:#,\:%,\:XCOMM,n\:>,fb\:-
