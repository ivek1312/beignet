/* 
 * Copyright © 2012 Intel Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Benjamin Segovia <benjamin.segovia@intel.com>
 */

 /*
 * Copyright © 2007 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 * Authors:
 *    Eric Anholt <eric@anholt.net>
 *
 */

#define PCI_CHIP_SANDYBRIDGE_GT1        0x0102 /* Desktop */
#define PCI_CHIP_SANDYBRIDGE_GT2        0x0112
#define PCI_CHIP_SANDYBRIDGE_GT2_PLUS   0x0122
#define PCI_CHIP_SANDYBRIDGE_M_GT1      0x0106 /* Mobile */
#define PCI_CHIP_SANDYBRIDGE_M_GT2      0x0116
#define PCI_CHIP_SANDYBRIDGE_M_GT2_PLUS 0x0126
#define PCI_CHIP_SANDYBRIDGE_S          0x010A /* Server */

#define PCI_CHIP_IVYBRIDGE_GT1          0x0152 /* Desktop */
#define PCI_CHIP_IVYBRIDGE_GT2          0x0162
#define PCI_CHIP_IVYBRIDGE_M_GT1        0x0156 /* Mobile */
#define PCI_CHIP_IVYBRIDGE_M_GT2        0x0166
#define PCI_CHIP_IVYBRIDGE_S_GT1        0x015a /* Server */

#define IS_MOBILE(devid) (devid == PCI_CHIP_I855_GM || \
                          devid == PCI_CHIP_I915_GM || \
                          devid == PCI_CHIP_I945_GM || \
                          devid == PCI_CHIP_I945_GME || \
                          devid == PCI_CHIP_I965_GM || \
                          devid == PCI_CHIP_I965_GME || \
                          devid == PCI_CHIP_GM45_GM || \
                          IS_IGD(devid) || \
                          devid == PCI_CHIP_ILM_G)

#define IS_G45(devid)    (devid == PCI_CHIP_IGD_E_G || \
                          devid == PCI_CHIP_Q45_G || \
                          devid == PCI_CHIP_G45_G || \
                          devid == PCI_CHIP_G41_G || \
                          devid == PCI_CHIP_B43_G || \
                          devid == PCI_CHIP_B43_G1)
#define IS_GM45(devid)   (devid == PCI_CHIP_GM45_GM)
#define IS_G4X(devid)    (IS_G45(devid) || IS_GM45(devid))

#define IS_ILD(devid)    (devid == PCI_CHIP_ILD_G)
#define IS_ILM(devid)    (devid == PCI_CHIP_ILM_G)
#define IS_GEN5(devid)   (IS_ILD(devid) || IS_ILM(devid))

#define IS_915(devid)    (devid == PCI_CHIP_I915_G || \
                          devid == PCI_CHIP_E7221_G || \
                          devid == PCI_CHIP_I915_GM)

#define IS_945(devid)    (devid == PCI_CHIP_I945_G || \
                          devid == PCI_CHIP_I945_GM || \
                          devid == PCI_CHIP_I945_GME || \
                          devid == PCI_CHIP_G33_G || \
                          devid == PCI_CHIP_Q33_G || \
                          devid == PCI_CHIP_Q35_G || IS_IGD(devid))

#define IS_GEN4(devid)   (devid == PCI_CHIP_I965_G || \
                          devid == PCI_CHIP_I965_Q || \
                          devid == PCI_CHIP_I965_G_1 || \
                          devid == PCI_CHIP_I965_GM || \
                          devid == PCI_CHIP_I965_GME || \
                          devid == PCI_CHIP_I946_GZ || \
                          IS_G4X(devid))

#define IS_SNB_GT1(devid) (devid == PCI_CHIP_SANDYBRIDGE_GT1 || \
                           devid == PCI_CHIP_SANDYBRIDGE_M_GT1 || \
                           devid == PCI_CHIP_SANDYBRIDGE_S)

#define IS_SNB_GT2(devid) (devid == PCI_CHIP_SANDYBRIDGE_GT2 || \
                           devid == PCI_CHIP_SANDYBRIDGE_GT2_PLUS || \
                           devid == PCI_CHIP_SANDYBRIDGE_M_GT2 || \
                           devid == PCI_CHIP_SANDYBRIDGE_M_GT2_PLUS)

#define IS_GEN6(devid)    (IS_SNB_GT1(devid) || IS_SNB_GT2(devid))

#define IS_IVB_GT1(devid) (devid == PCI_CHIP_IVYBRIDGE_GT1 || \
                           devid == PCI_CHIP_IVYBRIDGE_M_GT1 || \
                           devid == PCI_CHIP_IVYBRIDGE_S_GT1)

#define IS_IVB_GT2(devid)  (devid == PCI_CHIP_IVYBRIDGE_GT2 || \
                            devid == PCI_CHIP_IVYBRIDGE_M_GT2)

#define IS_IVYBRIDGE(devid) (IS_IVB_GT1(devid) || IS_IVB_GT2(devid))

#define IS_GEN7(devid)  IS_IVYBRIDGE(devid)

#define IS_965(devid)   (IS_GEN4(devid) || \
                         IS_G4X(devid) || \
                         IS_GEN5(devid) || \
                         IS_GEN6(devid) || \
                         IS_GEN7(devid))

#define IS_9XX(devid)   (IS_915(devid) || \
                         IS_945(devid) || \
                         IS_965(devid))

#define IS_GEN3(devid)  (IS_915(devid) || IS_945(devid))

#define IS_GEN2(devid) (devid == PCI_CHIP_I830_M || \
                        devid == PCI_CHIP_845_G ||  \
                        devid == PCI_CHIP_I855_GM || \
                        devid == PCI_CHIP_I865_G)

