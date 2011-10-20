<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[mailkey].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $mailkey: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
  <?php endif; ?>
</head>

<body <?php if ($mailkey): print 'class="'. $mailkey .'"'; endif; ?>>

  <table width="100%" border="0" cellspacing="0" cellpadding="0">
     <tr>
        <td align="center">
           <table width="580" border="0" cellspacing="0" cellpadding="0">
              <tr>
                 <td align="center" class="permission"> </td>
              </tr>
              <tr>
                 <td class="header" height="77">
                    <img src="<?php print $headerimg_path; ?>" width="580" height="77" alt="Liberty Coalition" />
                 </td>
              </tr>
              <tr>
                 <td>
                    
                    <table width="580" border="0" cellspacing="20" cellpadding="0">
                       
                       <tr>
                          <td width="580" align="left" valign="top" class="mainbar">
                             <?php print $body; ?>
                          </td>
                       </tr>
                       
                    </table>
                    
                 </td>
              </tr>
              <tr>
                 <td align="center" valign="top" class="footer">
                    © Copyright 2011 - Liberty Coalition - 722 12th Street, NW Suite 400 - Washington DC 20005
                 </td>
              </tr>
           </table>
  
        </td>
     </tr>
  </table>

</body>
</html>

